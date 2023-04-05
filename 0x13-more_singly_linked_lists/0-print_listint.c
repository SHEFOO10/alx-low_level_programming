#include "lists.h"

/**
<<<<<<< HEAD
 * print_listint - prints all elements of a listint
 *
 * @h: the listint
 *
 * Return: the number of nodes
 */

=======
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
>>>>>>> 668193aa3dc0a1b4375fc6327380b08057721212
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
