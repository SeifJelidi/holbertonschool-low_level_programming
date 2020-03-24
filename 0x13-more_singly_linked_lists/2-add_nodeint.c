#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * Description: adds a new node at the beginning of a linked list
 * @head: double pointer to head
 * @n: integer type
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
