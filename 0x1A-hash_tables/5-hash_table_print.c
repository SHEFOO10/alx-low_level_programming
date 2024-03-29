#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 *
 * @ht: the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int delimetar = 0;
	hash_node_t *current_node = NULL;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			if (delimetar)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			delimetar = 1;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
