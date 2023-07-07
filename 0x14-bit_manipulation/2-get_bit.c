#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (n & mask)
		return (1);
	else
		return (0);

}

