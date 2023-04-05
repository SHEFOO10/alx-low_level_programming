#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: head of linked list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL; // on line 22 on the last iteration , this line is just for making sure the *head is NULL.
}
