#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the Nth node of a dlistint_t list and returns it
 * @head: The head of the linked list
 * @index: The index of the node, starting at 0
 *
 * Return: Returns the Nth node on success, Null on fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *nodeToReturn;
    unsigned int i;

    nodeToReturn = head;

    if (head == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < index && nodeToReturn != NULL; i++)
    {
        nodeToReturn = nodeToReturn->next;
    }
    return (nodeToReturn);
}