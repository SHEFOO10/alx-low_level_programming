#include "lists.h"

/**
 * insert_nodeint_at_index - a function inserts a new node at a given position.
 *
 * @head: head of the linked list
 * @idx: the index of the list wehre new node should be added
 * @n: number that will be insert to node data
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new;
	size_t i;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		return (new);
	}

	for (i = 0; i < idx ; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;

	}
	return (NULL);
}
