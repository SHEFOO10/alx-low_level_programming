#include "lists.h"

/**
 * print_listint - printing all elements of a listint_t list
 *
 * @h: pointer of the head of list
 *
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int number_of_nodes = 0;

	if (h == NULL)
		return (0);

	while (h->next)
	{
		printf("%d\n", h->n);
		number_of_nodes++;
		h = h->next;
	}
	printf("%d\n", h->next);

	return (number_of_nodes);
}
