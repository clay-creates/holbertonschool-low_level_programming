#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of dlistint_t list
 * @head: starting point of linked list
 * @n: data added to new
 *
 * Return: return new node on success, NULL on fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	current = *head;

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		new->prev = current->prev;
		current->next = new;
	}
	return (new);
}
