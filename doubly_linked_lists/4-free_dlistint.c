#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: starting point of linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
