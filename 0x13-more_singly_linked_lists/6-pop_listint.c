#include "lists.h"

/**
 * pop_listint - deletes head node a listint linked list
 *
 * @head: head of the linked list
 *
 * Return: node's data (n)
 */

int pop_listint(listint_t **head)
{
	int head_n;
	listint_t *temp = *head;

	if (head == NULL)
		return (0);

	head_n = temp->n;

	*head = temp->next;

	return (head_n);
}

