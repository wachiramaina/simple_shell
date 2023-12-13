#include "main.h"

/**
 * in_built - takes care of builtins
 * @tkn: command
 * @env: env var
 * @n: ith command
 * @cmd: comand to free
 *
 * Return: 1 or 0
 */

int in_built(char **tkn, lists *env, int n, char **cmd)
{
	int i;

	if (strcompare(tkn[0], "exit") == 0)
	{
		i = _exit(tkn, env, n, cmd);
	}
	else if (strcompare(tkn[0], "env") == 0)
	{
		print_env(tkn, env);
		i = 1;
	}
	else if (strcompare(tkn[0], "setenv") == 0)
	{
		_setenviron(&env, tkn);
		i = 1;
	}
	else if (strcompare(tkn[0], "unsetenv") == 0)
	{
		_unsetenviron(&env, tkn);
		i = 1;
	}
	return (i);
}
