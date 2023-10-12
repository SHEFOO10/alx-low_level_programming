#include "lists.h"

/**
 * sum_dlistint -  sum all the data (n) of a dlistint_t linked list.
 *
 * @head: pointer to head of the linked list.
 *
 * Return: sum of all of (n).
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		if (head->prev != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
