#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at given location
 * @head: starting point of linked list
 * @n: position to insert new node
 *
 * Return: return address of new node on success, NULL on fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (head == NULL || *head == NULL)
	{
		free(new);
		return (NULL);
	}

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	current = *head;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
