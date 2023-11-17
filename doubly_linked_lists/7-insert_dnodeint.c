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
		new->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}

	for (i = 0; i <= idx && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL && i < idx)
	{
		free(new);
		return (NULL);
	}

	new->next = current;
	new->prev = current->prev;
	if (current->prev != NULL)
	{
		current->prev->next = new;
	}
	current->next = new;

	return (new);
}
