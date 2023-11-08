#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: name of size_t list
 *
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
    size_t counter = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)");
        }
        else
        {
            printf("[%d]\n [%s]\n", h->len, h->str);
        }
        counter++;
        h = h->next;
    }
    return (counter);
}