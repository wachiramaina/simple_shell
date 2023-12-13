#include "main.h"

/**
 * set_env - concatenates two string before setting env
 * @env: env var
 * @env_name: env name
 * @dir_path: directory path
 *
 * Return: 0 for success
 */

int set_env(lists **env, char *env_name, char *dir_path)
{
	int i = 0, ind = 0;
	char *ct;
	lists *tmp;

	ct = strduplicate(env_name);
	ct = strconcat(ct, "=");
	ct = strconcat(ct, dir_path);
	i = find_environ(*env, env_name);

	tmp = *env;
	for (; ind < i; ind++)
	{
		tmp = tmp->next;
	}
	free(tmp->var);
	tmp->var = strduplicate(ct);
	free(ct);
	return(0);
}
