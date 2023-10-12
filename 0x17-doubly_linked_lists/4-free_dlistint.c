#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: head of linked list to be freed.
 *
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
