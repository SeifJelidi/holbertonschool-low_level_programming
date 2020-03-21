#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * Description: prints all the elements of a list_t list
 * @h: pointer to head node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;
	char *ch;
	int l;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			ch = "(nil)";
			l = 0;
		}
		else
		{
			ch = h->str;
			l = h->len;
		}
		printf("[%d] %s\n", l, ch);
		num++;
		h = h->next;
	}
	return (num);
}
