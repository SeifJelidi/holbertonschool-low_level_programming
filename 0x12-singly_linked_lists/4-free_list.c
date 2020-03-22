#include "lists.h"

/**
 * free_list - frees a linked list
 * Description: frees a linked list
 * @head: pointer to a pointer to head
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *q;

	while (head != NULL)
	{
		q = head->next;
		free(head->str);
		free(head);
		head = q;
	}
}
