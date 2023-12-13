#include "main.h"

/**
 * _line - stores command
 * @s: buffer
 *
 * Return: num of chars
 */

size_t _line(char **s)
{
	ssize_t i = 0, size = 0, t_t = 0, num = 0, t_two = 0;
	char buffer[1024];

	while(t_two == 0 && (i = read(STDIN_FILENO, buffer, 1024 - 1)))
	{
		if (i == -1)
			return (-1);
		buffer[i] = '\0';
		for(num = 0; buffer[num] != '\0'; num++)
		{
			if (buffer[num] == '\n')
				t_two = 1;
		}

		if (t_t == 0)
		{
			i++;
			*s = malloc(sizeof(char) * i);
			*s = strcopy(*s, buffer);
			size = i;
			t_t = 1;
		}
		else
		{
			size += i;
			*s = strconcat(*s, buffer);
		}
	}
	return (size);
}
