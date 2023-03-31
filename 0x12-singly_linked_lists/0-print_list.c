#include <stdio.h>
#include "lists.h"

/**
<<<<<<< HEAD
 * print_list - print singly linked list
 *
 * @h: linked list
 *
 * Return: size of list
=======
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
>>>>>>> ed77a97053f3d469ec8736233f566c1560b6263a
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
