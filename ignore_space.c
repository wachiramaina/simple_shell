#include "main.h"

/**
 * ignore_spc - remove space in a string
 * @s: string to remove space
 *
 * Return: new str
 */

char *ignore_spc(char *s)
{
	while (*s == ' ')
		s++;
	return (s);
}
