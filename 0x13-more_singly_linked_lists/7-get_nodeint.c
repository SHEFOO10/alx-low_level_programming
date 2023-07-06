#include "lists.h"

/**
 * get_nodeint_at_index - get data of node on specific index
 *
 * @head: head of the linked list
 * @index: index of the node that user would get it's data
 *
 * Return: node on specific index, on failure (NULL)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
