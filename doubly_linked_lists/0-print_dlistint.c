#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: starting point of linked list
 *
 * Return: returns the number of nodes in linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		prinf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
