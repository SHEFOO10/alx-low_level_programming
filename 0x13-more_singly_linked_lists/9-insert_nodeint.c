#include "lists.h"

/**
 * insert_nodeint_at_index - insert node on specific index
 *
 * @head: head of the linked list.
 * @idx: index of the new node.
 * @n: data for the new node.
 *
 * Return: address of the new node, (NULL) on failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int index;

	current = *head;
	new_node = malloc(sizeof(listint_t));

	if ((*head == NULL && idx != 0) || new_node == NULL)
		return (NULL);

	new_node->n = n;

	for (index = 0; head != NULL && index < idx - 1; index++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL); 
	}

	if (idx == 0)
	{
		new_node->next = *head;

		*head = new_node;
	}
	else if (current->next)
	{
		new_node->next= current->next;
		current->next = new_node;
	}
	else
	{
		new_node->next = NULL;
		current->next = new_node;
	}

	return (new_node);
}

