#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * Description: prints all the elements of a linked list
 * @h: pointer to head node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
