#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * Description: returns the nth node of a linked list
 * @head: pointer to head node
 * @index: index of the node to return
 * Return: node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *q;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	q = head;
	while (i < index && q != NULL)
	{
		q = q->next;
		i++;
	}
	return (q);
}
