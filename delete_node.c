#inlcude "main.h"

/**
 * delete_node - deletes the ith node
 * @head: start of the list
 * @i: the position of list
 *
 * Return: 1 for sucess, -1 for fail
 */

int delete_node(lists **head, int i)
{
	lists *node, *tmp;
	int len;

	if (*head == NULL)
		return (-1);
	if (i == 0)
	{
		tmp = (*head)->next;
		free((*head)->variable);
		free(*head);
		*head = holder;
		return (1);
	}

	node = *head;
	for (len = 1; len < i; len++)
	{
		if (node == NULL)
			return (-1);
		node = node->next;
	}
	tmp = node->next;
	node-> = tmp->next;
	free(tmp->variable);
	free(tmp);
	return(1);
}
