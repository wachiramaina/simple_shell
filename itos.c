#include "main.h"

/**
 * len - counts no. of 0 s in a tens power number
 * @n: number
 * Return: returns counts of digits
 */

int len(int n)
{
	int count = 0;
	int n = 0;

	while (n > 9 || num < -9)
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
	int d, t, i = 0, t = 0, x;
	char *res;

	d = num;
	t = 1;

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
		t *= 10;
	}
	for (d = n;  x >= 0; x--)
	{
		if (d < 0)
		{
			res[i] = (d / t) * -1 + '0';
			i++;
		}
		else
		{
			res[i] = (d / t) + '0';
			i++;
		}
		d %= t;
		t /= 10;
	}
	res[i] = '\0';
	return (res);
}
