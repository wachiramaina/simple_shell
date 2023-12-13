#include "main.h"

/**
 * strconcat - concatenate two strings
 * @dest: string  to append
 * @src: string 
 * Return: concatenated string
 */

char *strconcat(char *dest, char *src)
{
	int len, len2, total = 0, j = 0;

	for (len = 0; dest[len] != '\0'; len++)
	{
		total++;
	}
	for (len2 = 0; src[len2] != '\0'; len2++)
	{
		total++;
	}

	dest = realloc(dest, len, sizeof(char) * total + 1);

	while (src[j] != '\0')
	{
		dest[len] = src[j];
		len++;
		j++;
	}
	dest[len] = '\0';

	return (dest);
}
