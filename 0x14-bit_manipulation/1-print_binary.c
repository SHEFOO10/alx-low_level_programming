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
	int len = n / 2;
	char *b_number = malloc(8);
	char *ptr = b_number;
	int i;
	int reminder = 0;

	for (i = 6; i >= 0; i--)
	{
		if (i <= len)
			break;

		n = n / 2;
		reminder = n % 2;
		if (reminder)
		{
			*b_number = '1';
			b_number++;
		}
		else
		{
			*b_number = '0';
			b_number++;
		}

	}
	b_number = ptr;

	write(1, b_number, 8);


}
