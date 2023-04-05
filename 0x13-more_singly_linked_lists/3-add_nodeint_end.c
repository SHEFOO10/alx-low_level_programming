#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a linked list.
 *
 * @head: head of the linked list
 * @n: number to put it on node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;

	while (temp)
		temp->next;

	temp->n = n;
	temp->next = NULL;

	return (temp);
}
