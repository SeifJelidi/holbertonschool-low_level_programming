#include "lists.h"

/**
 * list_len - return number of elements in a linked list
 * Description: return number of elements in a linked list
 * @h: pointer to head node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
