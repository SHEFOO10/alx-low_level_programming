#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the number.
 * @index: the position
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1 << index;
	unsigned int tmp = *n;

	*n |= mask;
	if (*n == tmp)
		return (0);
	return (1);

}
