#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 *
 * @head: head of the linked list
 *
 * Return: the sum of all the data (n).
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp = head;

	if (!head)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
