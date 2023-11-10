#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given location
 * @head: starting point of linked list
 * @n: position to insert new node
 *
 * Return: return address of new node on success, NULL on fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	if (new == NULL)
	{
		return (NULL);
	}

	while (idx < n)
	{
		if (idx == n)
		{
			new->n = n;
			new->next = *head;
		}
		idx++;
		*head = (*head)->next;
	}
	return (new);
}
