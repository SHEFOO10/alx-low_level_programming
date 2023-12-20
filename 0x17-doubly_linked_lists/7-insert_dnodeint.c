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
	dlistint_t *new_node = NULL;
	dlistint_t *tmp = *h;
	unsigned int index = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	index++;
	while (tmp->prev != NULL)
		tmp = tmp->prev;
	while (tmp)
	{
		if (index == idx)
		{
			if (tmp->next == NULL)
				return (add_dnodeint_end(h, n));
			new_node = malloc(sizeof(dlistint_t));
			if (new_node)
			{
				new_node->n = n;
				new_node->next = tmp->next;
				new_node->prev = tmp;
				tmp->next->prev = new_node;
				tmp->next = new_node;
			}
			break;
		}
		index++;
		tmp = tmp->next;
	}
	return (new_node);
}
