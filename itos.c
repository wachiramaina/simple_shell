#include "main.h"

/**
 * len - counts no. of 0 s in a tens power number
 * @n: number
 * Return: returns counts of digits
 */

int len(int num)
{
	int count = 0;
	int n = num;

	while (n > 9 || n < -9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

/**
 * _itos - turn int to string
 * @num: int
 * Return: return int as string, if failed NULL
 */

char *_itos(int num)
{
	int d, v, i = 0, t = 0, x;
	char *res;

	d = num;
	v = 1;

	if (num < 0)
		t = 1;
	res = malloc(sizeof(char) * (len(d) + 2 + t));

	if (res == NULL)
		return (NULL);
	if (num < 0)
	{
		res[i] = '-';
		i++;
	}
	for (x = 0; d > 9 || d < -9; x++)
	{
		d /= 10;
		v *= 10;
	}
	for (d = num;  x >= 0; x--)
	{
		if (d < 0)
		{
			res[i] = (d / v) * -1 + '0';
			i++;
		}
		else
		{
			res[i] = (d / v) + '0';
			i++;
		}
		d %= v;
		v /= 10;
	}
	res[i] = '\0';
	return (res);
}
