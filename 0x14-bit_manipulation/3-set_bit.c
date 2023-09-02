#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: pointer to the number
 * @index: index of the bit to change it to 1.
 *
 * Return: (1) on success, (-1) if error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > INT_BITS)
		return (-1);
	mask <<= index;

	*n = (*n | mask);

	return (1);
}
