#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: starting point of linked list
 * @idx: index of the list, starting at 0
 * @n: position in index to insert
 *
 * Return: return new node on success, NULL on fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));

	if (h == NULL || *h == NULL)
	{
		free(new);
		return (NULL);
	}

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	current = *h;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = (*h)->prev;
		*h = new;
		return (new);
	}

	for (i = 0; i < idx && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	new->prev = current;
	current->next = new;

	return (new);
}
