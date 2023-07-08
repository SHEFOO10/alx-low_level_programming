#include "main.h"

/**
 * flip_bits - returns bits you need to flip to get another number.
 *
 * @n: first number.
 * @m: second one to flip to
 *
 * Return: bits you need to flip to get the other number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int diff;

	diff = n ^ m;

	do {
		diff_bits += (diff & 1);
		diff >>= 1;

	} while (diff > 0);

	return (diff_bits);
}
