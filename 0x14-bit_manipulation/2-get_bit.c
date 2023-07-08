#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * get_bit - get bit on specific index
 *
 * @n: number to get bit from
 * @index: index of the bit to get.
 *
 * Return: value of the bit on specific index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > INT_BITS)
		return (-1);

	if (n & mask)
		return (1);
	else
		return (0);

}

