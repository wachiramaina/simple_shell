#include "main.h"

/**
 * ex - frees user input and exits the main program
 * @s: user command into shell
 * @env: bring environmental variable to free at error
 * @n: nth user command line input to print message
 * @com: bring command to free
 * Return: 0 success 2 fail
 */

int ex(char **s, lists *env, int n, char **com)
{
	int e_v = 0;

	if (s[1] != NULL)
		e_v = stoi(s[1]);
	if (e_v == -1)
	{
		illegal_num(s[1], n, env);
		free_double_ptr(s);
		return (2);
	}

	free_double_ptr(s);
	free_list(env);

	if (com != NULL)
		free_double_ptr(com);
	exit(e_v);
}
