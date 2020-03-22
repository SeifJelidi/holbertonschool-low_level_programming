#include "lists.h"

/**
 * add_node_end - return number of elements in a linked list
 * @head: pointer to a pointer to head
 * @str: string character
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *q;
	unsigned int len = 0, i;

	if (str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		len++;
	node->len = len;
	node->str = strdup(str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	q = *head;
	while (q->next != NULL)
		q = q->next;
	q->next = node;
	node->next = NULL;
	return (*head);
}
