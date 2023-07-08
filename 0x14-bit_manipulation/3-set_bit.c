#include "main.h"

/**
 * set_bit - set value at specific bit.
 *
 * @n: pointer to the number.
 * @index: of the specific bit
 *
 * Return: (1) on success, (-1) if error occured 
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	unsigned long int mask = 1 << index;

	*n |= mask;
	return (1);
}
