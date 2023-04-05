#include "lists.h"

/**
<<<<<<< HEAD
 *  add_nodeint - adds a new node at the beginning of a listint_t list
 *
 *  @head: the linked list
 *  @n: the numbers
 *
 *  Return: the addres of the new element or Null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new;

	new = malloc(sizeof(listint_t));

=======
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
>>>>>>> 668193aa3dc0a1b4375fc6327380b08057721212
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

<<<<<<< HEAD
	return (*head);

=======
	return (new);
>>>>>>> 668193aa3dc0a1b4375fc6327380b08057721212
}
