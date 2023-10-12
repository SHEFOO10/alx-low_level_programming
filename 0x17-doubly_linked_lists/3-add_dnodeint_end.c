#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: head of the linked list.
 * @n: number to be saved in the node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp_head = *head;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = NULL;

	if (tmp_head)
	{
		while (tmp_head->next != NULL)
		{
			tmp_head = tmp_head->next;
		}
		tmp_head->next = new_node;
		new_node->prev = tmp_head;
	}
	if (tmp_head == NULL)
		*head = new_node;

	return (new_node);
}
