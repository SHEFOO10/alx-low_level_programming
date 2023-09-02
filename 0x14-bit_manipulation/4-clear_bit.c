#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: pointer of the number.
 * @index: index of the bit to set it to 0.
 *
 * Return: (1) on success, (-1) if error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~ (1 << index);

	if (index > INT_BITS)
		return (-1);

	*n = (*n & mask);
	return (1);
}

