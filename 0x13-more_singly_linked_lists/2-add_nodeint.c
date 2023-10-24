#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 *  Return NULL if memory allocation fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_n= malloc(sizeof(listint_t));
    if (new_n == NULL) 
    {
        return NULL;
    }

    new_n->n = n;
    new_n->next = *head;
    *head = new_n;

    return (new_n);
}
