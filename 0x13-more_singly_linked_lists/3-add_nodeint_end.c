#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * Description: adds a new node at the end of a linked list
 * @head: double pointer to head
 * @n: integer type
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *q;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	q = *head;
	while (q->next != NULL)
		q = q->next;
	q->next = node;
	node->next = NULL;
	return (*head);
}
