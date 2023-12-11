#include "main.h"

/**
 * _ctrl - ignores ctrl and prints prompt again
 * @num: takes an interger from the sig
 *
 * Return: void
 */

void _ctrl_C(int num)
{
	(void)num;
	write(STDOUT_FILENO, "\n$", 3);
}
