#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * Description: creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned int i;

	if (size == 0)
		return (NULL);
	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);
	htable->array = malloc(sizeof(hash_table_t *) * size);
	if (htable->array == NULL)
	{
		free(htable);
		return (NULL);
	}
	htable->size = size;
	for (i = 0 ; i < size ; i++)
		htable->array[i] = NULL;
	return (htable);
}
