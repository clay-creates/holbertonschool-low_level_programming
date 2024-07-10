#include "lists.h"

/**
 * free_dlistint - Frees the memory held by a dlistint list
 * @head: the head of the linked list
 */

void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    if (head == NULL)
    {
        return;
    }

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}