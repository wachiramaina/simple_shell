#include "main.h"

/**
 * int_len - number of digits in a num
 * @num: the int
 *
 * Return: number of digits
 */

int int_len(int num)
{
	int i, x = num;

	for (x = 0; x > 9 || x < -9; x++)
	{
		x /= 10;
		i++;
	}
	return (i);
}
