#include "lists.h"

/**
 * listint_len - returns the number of elements in linked listint list.
 *
 * @h: head of the linked list.
 *
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t length = 1;

	if (h == NULL)
		return (0);

	while (h->next)
	{
		if (h->n != '\0')
			length++;
		h = h->next;
	}


	return (length);
}

