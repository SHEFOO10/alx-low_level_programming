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
	listint_t *temp = head;

	if (!temp && !index)
		return (NULL);

	while (temp)
	{
		if (loop_index == index)
			return (temp);
		loop_index++;
		temp = temp->next;
	}
}

