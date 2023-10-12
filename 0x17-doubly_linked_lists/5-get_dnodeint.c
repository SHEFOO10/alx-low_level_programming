#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int idx = 0;

	while (tmp)
	{
		if (idx == index)
			return (tmp);
		tmp = tmp->next;
		idx++;
	}
	return (NULL);
}
