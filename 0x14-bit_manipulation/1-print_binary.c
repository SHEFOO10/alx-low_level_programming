#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: decimal number to be converted
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	short int mask = 1 << 7;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}

}
