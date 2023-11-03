#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 *
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key.
 * @value: the value associated with the key.
 *
 * Return: (1) if it succeeded, (0) otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *current_node = NULL;
	unsigned long int index;

	if (!ht || !key || key[0] == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		node = create_node(key, value);
		if (node == NULL)
			return (0);
		ht->array[index] = node;
		return (1);
	}
	else
	{
		current_node = ht->array[index];
		while (current_node)
		{
			if (strcmp(key, current_node->key) == 0)
			{
				free(current_node->value);
				current_node->value = strdup(value);
				return (1);
			}
			current_node = current_node->next;
		}
		node = create_node(key, value);
		if (!node)
			return (0);
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
}


hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return NULL;
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}