#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: current location in linked list
 *
 * Return: returns number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
    size_t counter = 0;

    while (h != NULL)
    {
        counter++;
    }
    return (counter);
}