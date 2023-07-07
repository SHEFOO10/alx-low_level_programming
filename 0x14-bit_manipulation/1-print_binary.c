#include "main.h"

/**
 * print_binary - print binary number on the console.
 *
 * @n: decimal number to be printed on binary.
 *
 */

void print_binary(unsigned long int n)
{
	unsigned int mask = n;

	if (n == 0)
		_putchar('0');

	while (mask)
	{
		if (mask & n)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}

