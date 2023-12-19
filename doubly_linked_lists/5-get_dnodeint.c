#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: starting point of linked list
 * @index: index of the node, starting at 0
 *
 * Return: returns nth node on success, NULL on fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node_return;
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
