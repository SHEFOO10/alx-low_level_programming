#include "lists.h"

/**
 * free_listint2 - frees linked list and set head to NULL
 *
 * @head: head of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	temp = *head;
	while ((current = temp) != NULL)
	{
		temp = temp->next;
		free(current);
	}
	*head = NULL;
}

