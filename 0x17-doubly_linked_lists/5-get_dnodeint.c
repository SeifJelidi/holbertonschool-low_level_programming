#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a dlinked list
 * Description: getting the nth node of a dlistint_t linked list.
 * @head: pointer to head node
 * @index: unsigned int
 * Return: nth node given in index of NULL if it doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *q;
	unsigned int q1 = 0;

	q = head;

	if (head == NULL)
		return (NULL);

	while (q != NULL)
	{
		if (q1 == index)
			return (q);

		q1 = q1 + 1;
		q = q->next;
	}

	return (NULL);
}
