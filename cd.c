#include "main.h"

/**
 * cd_ - change dir
 * @s: command
 * @env: env linked list
 * @i: the ith command
 *
 * Return: 0  or 2
 */

int cd_(char **s, lists *env, int i)
{
	char *curr = NUll; *directory = NULL;
	int ex_st = 0;

	curr = getcwd(curr, 0);
	if (s[1] != NULL)
	{
		if (s[1][0] == '~')
		{
			directory = get_environ("HOME", env);
			directory = strconcat(directory, s[1]);	
		}
		else if (s[1][0] == '-')
		{
			if (s[1][1] == '\0')
				directory = get_environ("OLDPWD", env);
		}
		else
		{
			if (s[1][0] != '/')
			{
				directory = getcwd(directory, 0);
				directory = strconcat(directory, "/");
				directory = strconcat(directory, s[1]);
			}
			else
				directory = strduplicate(s[1]);
		}
		ex_st = exec_cd(env, curr, directory, s[1], i);
		free(directory);
	}
	else
		home_cd(env, curr);
	free_double_ptr(s);
	return (ex_st);
}
