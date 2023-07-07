#include "main.h"

/**
 * get_length - get length as binary number
 *
 * @n: decimal number to calc length of it's binary
 *
 * Return: length of the number.
 */
int get_length(unsigned long int n)
{
	int length = 0;

	while (n > 0)
	{

		length++;
		n >>= 1;
	}
	length--;

	return (length);
}

/**
 * print_binary - print binary number on the console.
 *
 * @n: decimal number to be printed on binary.
 *
 */

void print_binary(unsigned long int n)
{
	int length;
	unsigned long int mask = 1;

	length = get_length(n);

	if (length > 0)
		mask <<= length;

	while (mask > 0)
	{
		if (mask & n)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}

