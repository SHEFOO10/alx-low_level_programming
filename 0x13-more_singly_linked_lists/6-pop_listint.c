#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 *
 * @head: head of the linked list
 *
 * Return: head node data if the linked list is empty return (0)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;

	free(*head);

	*head = temp;

	return (n);
}

