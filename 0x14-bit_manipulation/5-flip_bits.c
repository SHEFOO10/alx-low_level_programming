#include "main.h"

/**
 * flip_bits - number of bit to be fliped to get the other number.
 *
 * @n: number.
 * @m: number, i want to flip to.
 *
 * Return: number of bit i need to flip to get the other number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int diff = n ^ m;
	unsigned int bits = 0;

	while (diff)
	{
		bits += diff & 1;
		diff >>= 1;
	}
	return (bits);
}
