#include "lists.h"

/**
 * free_dlistint - free the linked list
 * Description: free a dlistint_t list.
 * @head: pointer to head node to be freed
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *q;

	while (head != NULL)
	{
		q = head;
		head = head->next;
		free(q);
	}
}
