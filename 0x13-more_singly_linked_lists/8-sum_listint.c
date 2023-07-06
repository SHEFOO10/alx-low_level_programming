#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 *
 * @head: copy of head of linked list.
 *
 * Return: sum of all data (n), (0) if list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;

	return (sum);
}
