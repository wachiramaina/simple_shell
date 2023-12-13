#include "main.h"

/**
 * strcompare - compare two strings
 * @str1: string 1
 * @str2: string2
 * Return: int telling num spaces in btwn, 0 if same string
 */

int strcompare( char *str1, char *str2)
{
	int i = 0;

	for (i = 0; *(str1 + i) == *(str2 + i) && *(str1 + i); i++)
		;

	if (*(str2 + i))
		return (*(str1 + 1) - *(str2 + i));
	else
		return (0);
}
