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

	if (new == NULL)
	{
		return (NULL);
	}

	if (*h == NULL)
	{
		*h = new;
	}
	else
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
	}

	new->n = n;
	current = *h;

	if (idx <= 0)
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

	if (current == NULL)
	{
		free(new);
		return (NULL);
	}

	if (current->prev != NULL)
	{
		current->prev->next = new;
	}
	current->next = new;

	return (new);
}
