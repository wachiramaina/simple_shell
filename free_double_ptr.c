#include "main.h"

/**
 * free_double_ptr - free malloced arrays
 * @s: array of strings
 */

void free_double_ptr(char **s)
{
	int i = 0;
	
	for (i = 0; s[i] != NULL; i++)
	{
		free(s[i]);
	}
	free(s);
}
