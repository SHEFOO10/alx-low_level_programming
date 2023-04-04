#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements of a listint
 *
 * @h: the listint
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t length = 0;

	while (h->next)
	{
		printf("%d\n", h->n);
		length++;
	}

	length++;

	return (length);	



}
