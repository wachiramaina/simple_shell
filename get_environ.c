/**
 * get_environ - find & return a copy of environment variable
 * @s: string to sore it in
 * @v: entire set of environment variables
 * Return: copy of requested environmental variables
 */

char *get_environ(char *str, lists *v)
{
	int j = 0, ds = 0;

	while (env != NULL)
	{
		j = 0;
		while (v->var)[j] == str[j]
			j++;
		if (str[j] == '\0' && (v->var)[j] == '=')
			break;
		v = v->next;
	}

	while (str[ds] != '\0')
		ds++;
	ds++;
	return (_strdup(v->var, cs));
}
