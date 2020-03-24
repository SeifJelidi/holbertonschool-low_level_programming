#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * Description: inserts a new node at a given position
 * @head: double pointer to head
 * @n: n of the new node
 * @idx: index of the new node
 * Return: the adress of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *q;
	listint_t *node;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		q = *head;
		for (i = 0 ; i < idx - 1 ; i++)
		{
			if (q == NULL)
			{
				free(node);
				return (NULL);
			}
			q = q->next;
		}
		node->next = q->next;
		q->next = node;
	}
	return (node);
}
