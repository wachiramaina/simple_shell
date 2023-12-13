#include "main.h"

/**
 * strcpy - copy a string pointed by src
 * @d: copy source to buffer
 * @s: Source to copy
 * Return:  copy of original source
 */

char *strcopy(char *d, char *s)
{
	int i, l;

	for (l = 0; s[l] != '\0'; l++)
		;
	for (i = 0; i <= l; i++)
		d[i] = s[i];
	return (d);
}
