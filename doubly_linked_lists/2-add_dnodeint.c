#include "lists.h"

/**
 * add_dnodeint - adds a new node at head of dlistint_t list
 * @head: starting point of linked list
 * @n: value to assign to new node
 *
 * Return: return new node on success, NULL on fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
