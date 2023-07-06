#include "lists.h"

/**
 * free_listint - free linked list
 *
 * @head: head of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}

