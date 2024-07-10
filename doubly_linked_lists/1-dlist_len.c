#include "lists.h"

/**
 * dlisting_len - Method that shows the number of nodes in a dlistint_t
 * @h: head of the linked list
 *
 * Return: returns the number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
    size_t counter = 0;

    while (h != NULL)
    {
        counter++;
        h = h->next;
    }
    return (counter);
}