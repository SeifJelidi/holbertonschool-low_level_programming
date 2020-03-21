#include "lists.h"
/**
 * add_node - add a node at the beggining of a list
 * Description: add a node at the beggining of a list
 * @head: double pointer to head
 * @str: string character
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int i = 0;
	unsigned int length;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);
	for (i = 0 ; str[i] != '\0' ; i++)
		length++;
	node->len = length;
	node->next = *head;
	*head = node;
	return (*head);
}
