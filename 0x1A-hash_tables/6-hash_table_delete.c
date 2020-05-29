#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * Description: deletes a hash table
 * @ht: the hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
        hash_node_t *c_node, *n_node;
        unsigned int i;

        if (!ht)
                return;
        for (i = 0 ; i < ht->size ; i++)
        {
                c_node = ht->array[i];
                while (c_node)
                {
                        n_node = c_node->next;
                        free(c_node->key);
                        free(c_node->value);
                        free(c_node);
                        c_node = n_node;
                        free(n_node);
                }
        }
        free(ht->array);
        free(ht);
}
