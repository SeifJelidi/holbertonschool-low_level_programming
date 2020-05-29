#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * Description: prints a hash table
 * @ht: the hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *c_node;
	unsigned int i;
	int first = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0 ; i < ht->size ; i++)
	{
		c_node = ht->array[i];
		while (c_node != NULL)
		{
			if (first > 0)
				printf(", ");
			else
				first++;
			printf("'%s': '%s'", c_node->key, c_node->value);
			c_node = c_node->next;
		}
	}
	printf("}\n");
}
