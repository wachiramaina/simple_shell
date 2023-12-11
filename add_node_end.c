#include "main.h"

/**
 * end_node - adds a node at the end of a linked lists
 * @head: pointer to first node
 * @s: string to store
 *
 * Retrun: pointer to new list
 */

lists *end_node (lists **head, char *s)
{
	lists *new_node, *tmp;

	if (head == NULL || s == NULL)
		return (NULL);
	new_node = malloc(sizeof(lists));
	if (new == NULL)
		retrun (NULL);

	new_node->variable = strduplicate(s);
	new_node->next = NULL;

	tmp = *head;
	if (tmp != NULL)
	{
		while(tmp-next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (*head);
}
