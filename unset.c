#include "main.h"

/**
 * find_environ - find given environmental variable in linked list
 * @v: environment variable
 * @s: variable name
 * Return: idx of node in linked list
 */

int find_environ(lists *v,char *s)
{
	int j = 0, i = 0;

	while (v != NULL)
	{
		j = 0;
		while ((v->var)[j] == s[j])
			j++;
		if (s[j] == '\0')
			break;
		v = v->next;
		i++;
	}
	if (v == NULL)
		return (-1);
	return (i);
}

/**
 * _unsetenviron - remove node in env variables
 * @v: linked list
 * @s: user's typed command
 * Return: success 0
 */

int _unsetenviron(lists **v, char **s)
{
	int i = 0, j = 0;

	if(s[1] == NULL)
	{
		write(STDOUT_FILENO, "Too few arguments\n", 18);
		free_double_ptr(s);
		return (-1);
	}
	i = find_environ(*v, s[1]);
	free_double_ptr(s);
	if (i == -1)
	{
		write(STDOUT_FILENO, "Cannot find\n", 12);
		return (-1);
	}
	j = delete_node(v, i);
	if (j == -1)
	{
		write(STDOUT_FILENO, "Cannot find\n", 12);
		return (-1);
	}
	return (0);
}

/**
 * _setenviron - create or modify existing environmental variables
 * @v: linked list
 * @s: user's typed command
 * Return: success 0, 1 on fail
 */

int _setenviron(lists **v, char **s)
{
	int i = 0, j = 0;
	char *c;
	lists *tmp;

	if (s[1] == NULL || s[2] == NULL)
	{
		write(STDOUT_FILENO, "Too few arguments\n", 18);
		free_double_ptr(s);
		return (-1);
	}
	c = strduplicate(s[1]);
	c = strconcat(c, "=");
	c = strconcat(c, s[2]);
	i = find_environ(*v, s[1]);
	if (i == -1)
	{
		end_node(v, c);
	}
	else
	{
		tmp = *v;
		while (j < i)
		{
			tmp = tmp->next;
			j++;
		}
		free(tmp->var);
		tmp->var = strduplicate(c);
	}
	free(c);
	free_double_ptr(s);
	return (0);
}
