#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer of the linked list.
 * @idx: index of the node to insert node in.
 * @n: value of n for the node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp = *h;
	unsigned int index = 0;

	new_node->n = n;

	while (tmp)
	{
		if (index == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
			{
				new_node->next = tmp;
				new_node->prev = tmp->prev;
				tmp->prev->next = new_node;
				tmp->prev = new_node;
			}
			break;
		}
		index++;
		tmp = tmp->next;
	}
	return (new_node);
}
