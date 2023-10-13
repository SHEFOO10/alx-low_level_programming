#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 *	at index of a dlistint_t linked list.
 *
 * @head: head of the linked list.
 * @index: of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	while (tmp->prev)
		tmp = tmp->prev;

	while (tmp)
	{
		if (idx == index)
		{
			if (tmp->prev)
			{
				tmp->prev->next = tmp->next;
				tmp->next->prev = tmp->prev;
			}
			else
			{
				if (tmp->next)
					tmp->next->prev = NULL;
				*head = tmp->next;
			}
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		idx++;
	}
	return (-1);
}
