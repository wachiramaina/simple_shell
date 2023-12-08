#include "main.h"

/**
 * ex - frees user input and exits the main program
 * @s: user command into shell
 * @env: bring environmental variable to free at error
 * @n: nth user command line input to print message
 * @com: bring command to free
 * Return: 0 success 2 fail
 */

Int ex(char **s, list_t *env, int n, char **com)
{
	int e_v = 0;

	if (s[1] != NULL)
		e_v = stoi(s[i]);
	if (e_v == -1)
	{
		illegal_num(s[1], n, env);
		free_ptr(s);
		return (2);
	}

	free_ptr(s);
	free_linkedlist(env);

	if (com != NULL)
		free_ptr(command);
	exit(e_v);
}
