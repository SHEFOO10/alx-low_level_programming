#include "lists.h"

/**
<<<<<<< HEAD
 * listint_len - function that returns the number of elements in a linked list
 *
 * @h: head of linked list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
=======
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
>>>>>>> 668193aa3dc0a1b4375fc6327380b08057721212
}
