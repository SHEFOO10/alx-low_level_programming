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
	hash_table_t *hash_table = NULL;
	unsigned long int i = 0;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->array = (hash_node_t **) calloc(size, sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			hash_table->array[i] = NULL;
		}
	}
	hash_table->size = size;
	return (hash_table);
}
