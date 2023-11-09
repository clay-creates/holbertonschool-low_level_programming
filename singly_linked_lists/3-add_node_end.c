#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: starting point of linked list
 * @str: character data in list
 *
 * Return: return pointer to new node(s)
 */

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new;

    new = malloc(sizeof(list_t));

    if (*head == NULL || str == NULL || new == NULL)
    {
        free(new);
        return (NULL);
    }

    new->str = strdup(str);

    if (new->str == NULL)
    {
        free(new);
        return (NULL);
    }

    new->len = strlen(str);

    new->next = new;

    return (new);
}
