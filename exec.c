#include "main.h"

/**
 * ext - frees command and linked list
 * @str: command
 * @ev: list of evirnment
 *
 * Return: void
 */
void ext(char **str, lists *ev)
{
	free_double_ptr(str);
	free_linked_list(ev);
	_exit(0);
}

/**
 * exe - execute comd typed into shell
 * @s: command
 * @ev: evironmental variable
 * @num: ith user command; to be used in error message
 *
 * Return: 0 for success
 */
int exec(char **s, lists *ev, int num)
{
	char *tmp;
	int status = 0, t = 0;
	pd_t pd;

	if (access(s[0], F_OK) == 0)
	{
		tmp = s[0];
		t = 1;
	}
	else
		tmp = _which(s[0], ev);

	if (access(tmp, X_OK) != 0)
	{
		not_found(s[0], num, ev);
		free_double_ptr(s);
		return (127);
	}
	else
	{
		pd = fork();
		if (pd == 0)
		{
			if (execve(tmp, s, NULL) == -1)
			{
				not_found(s[0], num, ev);
				c_exit(s, ev);
			}
		}
		else
		{
			wait(&status);
			free_double_ptr(s);
			if (t == 0)
				free(tmp);
		}
	}
	return (0);
}
