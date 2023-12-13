#include "main.h"

/**
 * find_environ - find given environmental variable in linked list
 * @v: environment variable
 * @str: variable name
 * Return: idx of node in linked list
 */

int find_environ(list v,char *str)
{
	int j = 0, i = 0;

	while (v != NULL)
	{
		j = 0;
		while ((v->var)[j] == str[j])
			j++;
		if (str[j] == '\0')
			break;
		v = v -> next;
		i++;
	}
	if (v == NULL)
		return (-1);
	return (i);
}

/**
 * _unsetenviron - remove node in env variables
 * @v: linked list
 * @str: user's typed command
 * Return: success 0
 */

int _unsetenviron(lists **v, char **str)
{
	int i = 0, j = 0;

	if(str[1] == NULL)
	{
		write(STDOUT_FILENO, "Too few arguments\n", 18);
		free_double_ptr(str);
		return (-1);
	}
	i = find_environ(*v, str[1]);
	free_double_ptr(str);
	if (index == -1)
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
 * @str: user's typed command
 * Return: success 0, 1 on fail
 */

int _setenviron(lists **v, char **str)
{
	int i = 0, j = 0;
	char *c;
	list *holder;

	if (str[1] == NULL || str[2] == NULL)
	{
		write(STDOUT_FILENO, "Too few arguments\n", 18);
		free_double_ptr(str);
		return (-1);
	}
	c = strduplicate(str[1]);
	c = strconcat(c, "=");
	c = strconcat(c, str[2]);
	i = find_environ(*v, str[1]);
	if (i == -1)
	{
		end_node(v, c);
	}
	else
	{
		holder = *v;
		while (j < i)
		{
			holder = holder->next;
			j++;
		}
		free(holder->var);
		holder->var = strduplicate(c);
	}
	free(c);
	free_double_ptr(str);
	return (0);
}
