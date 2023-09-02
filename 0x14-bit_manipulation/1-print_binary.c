#include "main.h"
#include <stdio.h>

/**
 * Number_length - get the lenght of the number
 *
 * @n: the number.
 *
 * Return: length of the number.
 */

unsigned int Number_length(unsigned int n)
{
	int len = 0;

	while (n > 0)
	{
		len++;
		n >>= 1;
	}
	len--;
	return (len);
}

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: Number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	int length;
	unsigned long int mask = 1;

	length = Number_length(n);

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
