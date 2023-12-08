#include "main.h"

/**
 * stoi - convert string to int
 * @s: string
 * Return: number if success, -1 if string is non-number
 */

int stoi(char *s)
{
	int i = 0;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + (s[i] - '0');
		if (s[i] > '9' || s[i] < '0')
			return (-1);
	}
	return (num);
}
