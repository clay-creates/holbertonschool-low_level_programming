#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of the dlistint_t list
 * @head: The head of the linked list
 * @n: The value to be assigned to the new node
 *
 * Return: return the new node on success, NULL on fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *newNode, *currentNode;

    newNode = malloc(sizeof(dlistint_t));
    currentNode = *head;

    if (newNode == NULL)
    {
        return (NULL);
    }

    newNode->n = n;

    if (*head == NULL)
    {
        *head = newNode;
        newNode->prev = NULL;
    }
    else
    {
        while (currentNode->next != NULL)
        {
            currentNode = currentNode->next;
        }
        newNode->prev = currentNode;
        currentNode->next = newNode;
        newNode->next = NULL;
    }
    return (newNode);
}