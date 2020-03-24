#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * Description: frees a linked list
 * @head: double pointer to head
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *q;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			q = *head;
			*head = (*head)->next;
			free(q);
		}
		*head = NULL;
	}
}
