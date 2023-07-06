#include "lists.h"

/**
 * add_nodeint_end - add node to the end of linked list.
 *
 * @head: head of linked list
 * @n : value of n on node
 *
 * Return: address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}

