#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: starting point of linked list
 */

void free_list(list_t *head)
{
    list_t *temp = head;

    head = head->next;

    if (head == NULL)
    {
        free(head);
        return (NULL);
    }

    while (head->next != NULL)
    {
        free(head);
        free(head->next);
    }
}