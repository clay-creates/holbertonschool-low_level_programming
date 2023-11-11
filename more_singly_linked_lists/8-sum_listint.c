#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) in linked list
 * @head: starting point of linked list
 *
 * Return: return sum of data on success, 0 on fail
 */

int sum_listint(listint_t *head)
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
