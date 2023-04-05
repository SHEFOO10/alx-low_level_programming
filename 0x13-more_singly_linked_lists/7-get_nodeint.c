#include "lists.h"

/**
 * get_nodeint_at_index - nth node of a listint_t linked list.
 *
 * @head: head of linked list.
 * @index: the index of node
 *
 * Return: node if success , NULL if fail.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int loop_index = 0;

	while (head)
	{
		if (loop_index == index)
			return (head);
		loop_index++;
		head = head->next;
	}
}
