#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > INT_BITS)
		return (-1);

	unsigned long int mask = 1 << index;

	if (n & mask)
		return (1);
	else
		return (0);

}

