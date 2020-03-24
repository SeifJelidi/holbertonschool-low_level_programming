#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * Description: delete the head node of a linked list
 * @head: double pointer to head
 * Return: head node's data (n) or 0 if head is NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *q;
	int n;

	if (*head == NULL)
		return (0);
	q = *head;
	n = q->n;
	q = q->next;
	free(*head);
	*head = q;
	return (n);
}
