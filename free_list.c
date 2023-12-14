#include "main.h"

/**
 * free_list - frees a linked list
 * @h: list to free
 *
 * Return: void
 */

void free_list(lists *h)
{
	lists *tmp;

	while (h != NULL)
	{
		tmp = h;
		h = h->next;
		free(tmp->var);
		free(tmp);
	}
}
