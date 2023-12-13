#include "main.h"

/**
 * non_interact - handles piping
 * @env: env vars
 *
 * Return: void
 */

void non_interact(lists *env)
{
	size_t x, y;
	int cmd_no = 0, exit_st = 0;
	char *cmd = NULL, *new_cmd = NULL, **new_line, **tkn;

	x = _line(&cmd);
	if (x == 0)
	{
		free(cmd);
		exit(0);
	}

	new_cmd = cmd;
	cmd = ignore_wht_space(cmd);
	new_line = str_token(cmd, "\n");
	if (new_cmd != NULL)
		free(new_cmd);
	for (y = 0; new_line[y] != NULL; y++)
	{
		cmd_no++;
		tkn = NULL;
		tkn = str_token(new_line[y], " ");
		exit_st = in_built(tkn, env, cmd_no, new_line);
		if (exit_st)
		{
			y++;
			continue;
		}
		exit_st = exec(tkn, env, cmd_no);
	}
	free_double_ptr(new_line);
	free_list(env);
	exit(exit_st);
}
