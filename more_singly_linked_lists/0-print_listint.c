#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: current location in linked list
 *
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h == NULL)
		{
			printf("(null)");
		}
		else
		{
			printf("%d\n", h->n);
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
