#include "lists.h"
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head:
 * @str:
 *
 * Return: return pointer to list_t list
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t new;

    new = createNode();
    **head = new;
}