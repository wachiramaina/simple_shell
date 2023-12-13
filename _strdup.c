#include "main.h"

/**
 * _strdup - custom string duplication
 * @s: string to duplicate
 * @ds: number of bytes to exclude
 * Return: string
 */

char *_strdup(char *s, int ds)
{
	char *dup_str;
	int i, len =  0;

	if (s == NULL)
		return (NULL);

	while (*(s + len))
		len++;
	len++;

	dup_str = malloc(sizeof(char) * (len - ds));
	if (dup_str == NULL)
		return (NULL);

	i = 0;
	while (i < (len - ds))
	{
		*(dup_str + i) = *(str + ds + i);
		i++;
	}
	return (dup_str);
}

