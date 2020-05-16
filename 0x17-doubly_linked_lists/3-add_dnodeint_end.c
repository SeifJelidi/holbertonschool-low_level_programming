#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * Description: adds a new node at the end of a dlistint_t list.
 * @head: double pointer to the head
 * @n: int of the node to add
 * Return: address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *q;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	q = *head;
	while (q->next != NULL)
		q = q->next;
	q->next = node;
	node->prev = q;
	return (node);
}
