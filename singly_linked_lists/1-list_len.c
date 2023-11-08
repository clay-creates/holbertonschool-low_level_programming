#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: name of size_t list
 *
 * Return: returns number of elements via counter var
 */

size_t list_len(const list_t *h)
{
    size_t counter = 0;

    while (h != NULL)
    {
        counter++;
        h = h->next;
    }
    return (counter);
}