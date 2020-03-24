#include "lists.h"

/**
 * free_listint - frees a linked list
 * Description: frees a linked list
 * @head: pointer to head
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *q;

	while (head != NULL)
	{
		q = head->next;
		free(head);
		head = q;
	}
}
