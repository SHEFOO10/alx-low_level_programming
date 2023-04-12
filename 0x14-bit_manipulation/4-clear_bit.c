#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 *
 * @n: the number.
 * @index: the position of bit.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tmp = *n;
	int mask = 1 << index;
	*n ^= mask;

	if (*n == tmp)
		return (-1);
	return (1);

}
