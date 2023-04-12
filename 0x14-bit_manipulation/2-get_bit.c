#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: the number that i will get the bit from it.
 * @index: index of the bit.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int mask = 1 << index;

	if (n & mask)
		return (1);
	else if (!n & !mask)
		return (0);
	else
		return (-1);

}
