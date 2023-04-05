#include "lists.h"

/**
 * free_listint - free a linked list
 *
 * @head: the head of linked list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	lists_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
