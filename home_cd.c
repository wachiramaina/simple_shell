#include "main.h"

/**
 * _cd - change dir
 * @env: env linked list
 * @curr_dir: the current dir
 *
 * Return: void
 */

void home_cd(lists *env. char *curr_dir)
{
	char *hm = NULL;

	hm = get_environ("HOME", env);
	set_env(&env, "OLDPWD", curr_dir);
	free(curr_dir);
	if (access(hm, F_OK) == 0)
		chdir(home);
	curr_dir = NULL;
	curr_dir = get_cwd(curr_dir, 0);
	set_env(&env, "PWD", curr_dir);
	free(curr_dir);
	free(hm);
}
