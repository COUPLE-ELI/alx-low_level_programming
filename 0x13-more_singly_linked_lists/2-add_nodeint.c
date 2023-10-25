#include "lists.h"

/**
 * add_nodeint - adds a clean node at the beginning of a linked list
 * @head: pointer to the first clean node in the list
 * @n: data to insert in that clean node
 *
 * Return: pointer to the clean node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *clean;

	clean = malloc(sizeof(listint_t));
	if (!clean)
		return (NULL);

	clean->n = n;
	clean->next = *head;

	*head = clean;

	return (clean);
}

