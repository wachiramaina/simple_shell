#include "main.h"

/**
 * _which - fleshes out command by appending it to matching path directiom
 * @s: first user command
 * @env: environmental variable
 * Return: copy of fleshed out command
 */

char *which(char *s, lists *env)
{
	char *p, *ct = NULL, **toks;
	int i = 0;

	p = get_environ("PATH", env);
	toks = str_token(p, ":");
	free(p);

	i = 0;
	while (toks[i] != NULL)
	{
		if (toks[i][0] == '\0')
			ct = getcwd(ct, 0);
		else
			ct = strduplicate(toks[i]);
		ct = strconcat(ct, "/");
		ct = strconcat(ct, s);
		if (access(ct, F_OK) == 0)
		{
			free_double_ptr(toks);
			return (ct);
		}
		free(ct);
		i++;
	}
	free_double_ptr(toks);
	return (s);
}

