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
	int length = 1;

	while (h->next)
	{
		length++;
		h = h->next;
	}
	length++; /* for the last element */

	return (length);
}

