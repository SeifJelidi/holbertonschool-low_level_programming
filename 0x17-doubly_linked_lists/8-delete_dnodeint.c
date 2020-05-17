#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of linked list
 * Description: deletes the node at index of a linked list
 * @head: double pointer to head node
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *q = *head, *p;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = q->next;
		if (q->next != NULL)
			q->next->prev = NULL;
		free(q);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (q->next == NULL)
			return (-1);
		q = q->next;
	}
	p = q->next;
	q->next = p->next;
	if (p->next != NULL)
		p->next->prev = q;
	free(p);
	return (1);
}
