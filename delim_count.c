#include "main.h"

/**
 * delim_count - counts delimiters except continous ones
 * @s: command
 * @delm: the delimiter
 *
 * Return: the number of delims
 */

int delim_count(char *s, char delim)
{
	int i = 0, d_num = 0;

	for (; s[i] != '\0'; i++)
	{
		if ((s[i] == delim) && (s[i + i] != delim))
			d_num++;
		if ((s[i] == delim) && (s[i + 1] == '\0'))
			d_num--;
	}
	return (d_num);
}
