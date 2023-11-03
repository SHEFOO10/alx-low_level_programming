#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 *
 * @ht: the hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current_node = NULL, *to_be_freed = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			free(current_node->value);
			free(current_node->key);
			to_be_freed = current_node;
			current_node = current_node->next;
			free(to_be_freed);
		}
	}
	free(ht->array);
	free(ht);
}
