#include "main.h"

/**
 * del_size - return no. of delimiters
 * @s: user's command typed into shell
 * @del: delimeter
 * Return: no. of tokens
 */

int del_size(char *s, char del)
{
	int i = 0, num_del = 0;

	while (s[i] != '\0')
	{
		if (str[i] == del)
		{
			num_del++;
		}
		i++;
	}
	return (num_del);
}

