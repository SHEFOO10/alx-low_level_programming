#include "lists.h"

/**
 * add_nodeint_end - a function adds a new node at the end of a linked list.
 *
 * @head: head of the linked list
 * @n: number to put it on node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	while (temp)
		temp->next;

	new->n = n;
	new->next = NULL;
	temp->next = new;

	return (new);
}
