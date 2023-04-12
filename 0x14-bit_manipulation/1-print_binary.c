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
	int first_one = 0;
	short int mask = 1 << forward;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			first_one = 1;
		}
		else if (first_one)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

}
