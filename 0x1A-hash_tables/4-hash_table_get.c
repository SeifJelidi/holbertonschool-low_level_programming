#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * Description: retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: the value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *c_node;
	unsigned int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);

	c_node = ht->array[i];
	while (c_node != NULL)
	{
		if (strcmp(c_node->key, key) == 0)
			return (c_node->value);
		c_node = c_node->next;
	}
	return (NULL);
}
