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
	if (!(*head) || !head)
		return (0);

	listint_t *temp = (*head)->next;
	int num = (*head)->n;

	free(*head);
	*head = temp;

	return (n);
}

