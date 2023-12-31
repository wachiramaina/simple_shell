#include "main.h"

/**
 * write_list - writes the content of a linked list
 * @h: pointer to linked list
 *
 * Return: size of the list
 */

size_t write_list(lists *l)
{
	lists *copy = l;
	int num, len;

	if (l == NULL)
		return (0);
	for (len = 0; copy != NULL; len++)
	{
		if (copy->var == NULL)
		{
			write(STDOUT_FILENO, "(nill)", 5);
			write(STDOUT_FILENO, "\n", 1);
		}
		else
		{
			for (num = 0; (copy->var)[num] != '\0'; copy++)
				;
			write(STDOUT_FILENO, copy->var, num);
			write(STDOUT_FILENO, "\n", 1);
		}
		copy = copy->next;
	}
	return (len);
}
