#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in dlistint_t list
 * @head: starting point of linked list
 *
 * Return: return sum on success, 0 on fail
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
