#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * Description: returns the sum of all the data (n) of a linked list
 * @head: pointer to head node
 * Return: the sum of all the data (n) of a linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *q;
	int s = 0;

	if (head == NULL)
		return (0);
	q = head;
	while (q != NULL)
	{
		s += q->n;
		q = q->next;
	}
	return (s);
}
