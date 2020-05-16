#include "lists.h"
/**
* print_dlistint - prints list
* Description: prints all the elements of the lst
* @h: pointer of the head of list
* Return: number of the nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int n1 = 0;

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
