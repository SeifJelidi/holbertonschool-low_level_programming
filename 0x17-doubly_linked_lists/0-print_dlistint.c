#include "lists.h"
/**
* print_dlistint - prints list
* @h: pointer pointing to the head of the list
* Description: prints all the elements of the list
* Return: number of the nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t n1 = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n1 = n1 + 1;
	}
	return (n1);
}
