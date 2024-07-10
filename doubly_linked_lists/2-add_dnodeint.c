#include "lists.h"

/**
 * add_dnodeint - adds a new node at the head of the dlisting_l list
 * @head: The head of the linked list
 * @n: Value to be placed inside of the new node
 *
 * Return: return new node on success, NULL on fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newNode;

    newNode = malloc(sizeof(dlistint_t));

    if (newNode == NULL)
    {
        return (NULL);
    }

    newNode->n = n;
    newNode->next = *head;
    newNode->prev = NULL;
    if (*head != NULL)
    {
        (*head)->prev = newNode;
    }
    *head = newNode;

    return (newNode);
}