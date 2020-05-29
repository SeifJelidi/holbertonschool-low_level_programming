#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * Description: adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned int i;

	if (ht == NULL || key == NULL || key == '\0')
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	if (ht->array[i] != NULL)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t *));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);

	if (ht->array[i] == NULL)
		node->next = NULL;
	else
		node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}
