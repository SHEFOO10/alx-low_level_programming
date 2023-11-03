#include "hash_tables.h"

/**
 * hash_table_create - function creates hash table.
 *
 * @size: size of the hash table.
 *
 * Return: point to the hash table
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->size = size;
	return (hash_table);
}
