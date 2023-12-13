#include "main.h"

/**
 * strduplicate - return pointer to duplicate string
 * @str: string to duplicate
 * Return: pointer to duplicated string
 */

char *strduplicate(char *str)
{
	char *d_str;
	int i, len;

	if (str == NULL)
		return (NULL);
	while (*(str + len))
		len++;
	len++;

	d_str = malloc(sizeof(char) * len);
	if (d_str == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(d_str + i) = *(str + i);
		i++;
	}
	return (d_str);
}
