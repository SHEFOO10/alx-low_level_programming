#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *
 * @head: head of the linked list.
 * @n: number to be saved in the node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp_head;

	tmp_head = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (tmp_head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp_head->prev != NULL)
		tmp_head = tmp_head->prev;
	
	tmp_head->prev = new_node;
	new_node->next = tmp_head;
	*head = new_node;

	return (new_node);
}
