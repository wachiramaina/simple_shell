#include "main.h"

/**
 * _prompt - prompts and executes existing cmds
 * @env: env var
 *
 * Return: 0 for sucess
 */

int _promt(char **env)
{
	lists *ev;
	size_t i = 0, num = 0;
	int cmd_no = 0, exit_st = 0;
	char *cmd, *new_cmd, **tkn;

	ev = env_linked(env);
	do
	{
		cmd_no++;
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO,"$ ", 2);
		else
			non_interact(ev);
		signal(SIGINT, _ctrl_C);
		cmd = NULL;
		i = _line(&cmd);
		ctrl_d(i, cmd, ev);
		new_cmd = cmd;
		cmd = ignore_spc(cmd);

		for (num = 0; cmd[num] != '\n'; num++)
			;
		cmd[num] = '\0';
		if (cmd[0] == '\0')
		{
			free(new_cmd);
			continue;
		}
		tkn = NULL;
		tkn = str_token(cmd, " ");
		if (new_cmd != NULL)
			free(new_cmd);
		exit_st = in_built(tkn, ev, cmd_no, NULL);
	}
	while (1);
	return(exit_st);
}
