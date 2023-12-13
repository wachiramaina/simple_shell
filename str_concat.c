#include "main.h"

/**
 * str_concat - concatenate strings leaving out first char
 * @dest: string to add on
 * @src: string to copy
 *
 * Return: new str
 */

char *str_concat(char *dest, char *src)
{
	int i, index, len, ind;

	for (i = 0; dest[i] != '\0'; i++)
		len++;

	for (index = 0; src[index] != '\0'; index++)
		len++;

	dest = realloc(dest, i, sizeof(char) * len + 1);

	ind = 1;
	while (src[ind] != '\0')
	{
		dest[i++] = src[ind++];
	}
	dest[i] = '\0';

	return (dest);
}
