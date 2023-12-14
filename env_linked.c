#include "main.h"

/**
 * env_linked - creates a linked list from environmental variables
 * @v: environmental variables
 * Return: linked list
 */

lists *env_linked(char **v)
{
	lists *h;
	int i = 0;

	h = NULL;
	while (v[i] != NULL)
	{
		end_node(&h, v[i]);
		i++;
	}
	return (h);
}

/**
 * print_env - print environment variables
 * @str: user's command into shell
 * @v: environment variables
 * Return: 0 success
 */

int print_env(char **str, lists *v)
{
	free_double_ptr(str);
	write_list(v);
	return (0);
}
