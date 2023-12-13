#include "main.h"

/**
 * _which - fleshes out command by appending it to matching path directiom
 * @s: first user command
 * @env: environmental variable
 * Return: copy of fleshed out command
 */

char _which(char *s, lists *env)
{
	char *p, *cat = NULL, **toks;
	int i = 0;

	c = _env("PATH", env);
	toks = 
	free(p);

	i = 0;
	while (toks[i] != NULL)
	{
		if (toks[i][0] == '\0')
			cat = getcwd(cat, 0);
		else
			cat = strduplicate(toks[i]);
		cat = strconcat(cat, "/");
		cat = strconcat(cat, s);
		if (access(cat, F_OK) == 0)
		{
			free_double_ptr(toks);
			return (cat);
		}
		free(cat);
		i++;
	}
	free_double_ptr(toks);
	return (s);
}

