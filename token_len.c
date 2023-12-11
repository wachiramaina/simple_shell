#include "main.h"

/**
 * tkn_len - length of token
 * @s: the token
 * @index: position of command
 * @delimiter: the delimiter
 *
 * Return: length of token
 */

int tkn_len(char *s, int index, char delimiter)
{
	int i = 0;

	for (; (str[index] != delimiter) && (s[index] != '\0'); i++)
		index++;
	return (i);
}
