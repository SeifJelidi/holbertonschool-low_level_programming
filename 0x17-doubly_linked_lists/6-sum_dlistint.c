#include "lists.h"
/**
* sum_dlistint - the sum of all the data (n) of a dlistint_t linked list
* Description: the sum of all the data (n) of a dlistint_t linked list
* @head: the beginning of list.
* Return: the sum or if the list is empty, return 0.
*/
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
