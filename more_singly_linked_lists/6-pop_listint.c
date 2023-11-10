#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t list and returns data
 * @head: starting point for linked list
 *
 * Return: return data from head node (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	if (head != NULL || *head != NULL)
	{
		free(*temp);
		return ((*temp)->n);
	}
}
