#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * set_bit - set value at specific bit.
 *
 * @n: pointer to the number.
 * @index: of the specific bit
 *
 * Return: (1) on success, (-1) if error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > INT_BITS)
		return (-1);

	mask = 1 << index;

	*n |= mask;
	return (1);
}
