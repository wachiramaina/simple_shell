#include "main.h"

/**
 * rm_delim - removes delim from str
 * @s: string
 * @delim: the delimiter
 *
 * Return: the new str
 */

char *rm_delim(char *s, char delim)
{
	for (; (*s == delim); s++)
		;

	return (s);
}
