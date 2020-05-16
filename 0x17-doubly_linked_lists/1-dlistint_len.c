#include "lists.h"

/**
 * dlistint_len - return number of elements of a dlinked list
 * Description: return number of elements of a dlinked list
 * @h: pointer of the head of list
 * Return: number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int n1 = 0;
	const dlistint_t *an;

	an = h;

	while (an != NULL)
	{
		an = an->next;
		n1++;
	}

	return (n1);
}
