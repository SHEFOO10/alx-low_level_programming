#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: the number.
 * @index: the index.
 *
 * Return: the value of the bit at index or (-1) if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > INT_BITS)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
