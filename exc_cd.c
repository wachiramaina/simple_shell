#include "main.h"

/**
 * exec_cd - executes the cd funct
 * @env: env linked list
 * @curr_dir: working dir
 * @dir_path: dir path to change
 * @s: first arg to write to err
 * @n: line num for err
 *
 * Retrun: 0 or 2
 */

int exec_cd(lists *env, char *curr_dir, char *dir_path, char *s, int  n)
{
	int i = 0;

	if (access(dir_path, F_OK) == 0)
	{
		set_env(&env, "OLDPWD", curr_dir);
		free(curr_dir);
		ch_dir(dir_path);
		curr_dir = NULL;
		curr_dir = get_cwd(curr_dir, 0);
		set_env(&env, "PWD", curr_dir);
		free(curr_dir);
	}
	else
	{
		couldnt_cd(s, n, env);
		free(curr_dir);
		i = 2;
	}
	return (i);
}	
