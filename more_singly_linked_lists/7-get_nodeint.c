#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node in linked list
 * @head: starting point of linked list
 * @index: index of the node (starting at 0)
 *
 * Return: returns pointer to node on success, NULL on fail
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_return;
	unsigned int i;

	node_return = head;

	if (head == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < index && node_return != NULL; i++)
	{
		node_return = node_return->next;
	}

	return (node_return);
}
