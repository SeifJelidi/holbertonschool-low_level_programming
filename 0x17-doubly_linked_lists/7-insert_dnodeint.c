#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * Description: inserts a new node at a given position
 * @h: double pointer to head node
 * @idx: index of the list where the new node should be added
 * @n: n property of node to be inserted
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *q, *node;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (*h == NULL)
	{	*h = node;
		return (node);
	}
	if (idx == 0)
	{
		node->next = *h;
		(*h)->prev = node;
		*h = node;
		return (node);
	}
	q = *h;
	for (i = 0 ; q != NULL; i++)
	{
		if (i == idx)
		{
			q = q->prev;
			node->next = q->next;
			q->next->prev = node;
			q->next = node;
			node->prev = q;
			return (node);
		}
		if (q->next == NULL && i + 1 == idx)
		{	node->prev = q, q->next = node;
			return (node);
		} q = q->next;
	}
	return (NULL);
}
