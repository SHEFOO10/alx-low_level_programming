#include "lists.h"

/**
 * add_nodeint - add new node at the beginning
 *
 * @head: pointer of the head of linked list.
 * @n: value of element.
 *
 * Return: address of new element, on failure returns (NULL)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	
	new->next = (*head != NULL) ? *head: NULL;
	*head = new;

	return (new);
}

