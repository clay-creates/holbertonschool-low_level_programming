#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - adds a new node at the beginning listint_t list
 * @head: starting point of linked list
 * @n: integer data in list
 *
 * Return: return pointer to new node(s)
 */

listint_t add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    new = malloc(sizeof(listint_t));

    if (n == NULL || new == NULL)
    {
        free(new);
        return (NULL);
    }

    new->n = strdup(n);

    if (new->n == NULL)
    {
        free(new);
        return (NULL);
    }

    *head = new;

    return (new);
}