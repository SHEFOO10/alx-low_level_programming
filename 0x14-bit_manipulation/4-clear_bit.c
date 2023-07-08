#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)


/**
 * clear_bit - set specific bit on given index to 0
 *
 * @n: number that i will modify it's bit
 * @index: index of the bit that i'll modify
 *
 * Return: (1) on success , (-1) on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > INT_BITS)
		return (-1);

	mask = ~(mask << index);
	*n &= mask;
	return (1);
}
