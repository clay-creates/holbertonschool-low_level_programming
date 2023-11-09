#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head:
 * @str:
 *
 * Return: return pointer to list_t list
 */

list_t *add_node(list_t **head, const char *str)
{
    if (str == NULL)
    {
        return (NULL);
    }

    list_t *new = malloc(sizeof(list_t));

    if (new == NULL)
    {
        return (NULL);
    }

    new->str = strdup(str);

    if (new->str == NULL)
    {
        return (NULL);
    }

    new->next = *head;

    *head = new;

    return (new);
}