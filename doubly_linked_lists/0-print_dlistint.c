#include "lists.h"

/**
 * print_dlisting - prints all of the elements of a d dlistint_t list
 * @h: head of the linked list
 *
 * Return: returns the number of nodes in the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
    // Loop through list and print each value and setting active node to next
    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
}