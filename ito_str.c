#include "main.h"

/**
 * ito_str: convert int to str
 * @num: int to convert
 *
 * Return: the string
 */

char *ito_str(int num)
{
	int ten, dig, i = 0, t = 0, x;
	char *str;

	dig = num;
	ten = 1;

	if (num < 0)
		t = 1;
	str = malloc(sizeof(char) * (int_len(dig) + 2 + t));
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		str[i] = '-';
		i++;
	}
	for (x = 0; dig > 9 || dig < -9; x++)
	{
		dig /= 10;
		ten *= 10;
	}
	for (dig = num; x >= 0; x--)
	{
		if (dig < 0)
		{
			str[i] = (dig / ten) * -1 + '0';
			i++;
		}
		else
		{
			str[i] = (dig / ten) + '0';
			i++;
		}
		dig %= ten;
		ten /= 10;
	}
	str[i] = '\0';
	return (str);
}
