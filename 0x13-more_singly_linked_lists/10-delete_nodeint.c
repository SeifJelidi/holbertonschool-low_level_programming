#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index index of a linked list
 * Description:  deletes the node at index index of a linked list
 * @head: double pointer to head
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *q;
	listint_t *p;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	q = *head;
	for (i = 0 ; i < index ; i++)
	{
		if (q == NULL)
			return (-1);
		p = q;
		q = q->next;
	}
	if (q->next == NULL)
	{
		p->next = NULL;
		free(q);
	}
	else
		p->next = q->next;
	/*p = q->next;*/
	/*q->next = q->next->next;*/
	return (1);
}
