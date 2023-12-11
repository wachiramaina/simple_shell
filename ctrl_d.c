#include "main.h"

/**
 * ctrl_d - exit a prog
 * @i: characters read
 * @cmd: command
 * @env: env var
 *
 * Return: void
 */

void ctrl_d(int i, char *cmd, lists *env)
{
	if (i == 0)
	{
		free(cmd);
		free_list(env);
		if (isa_tty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
		exit(0);
	}
}
