#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: starting point of list
 *
 * Return: return the number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
	}
	return (counter);
}
