#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int.
 *
 * @b: string with binary number
 *
 * Return: the converted Number , on failure (0).
 */

unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	unsigned int in_decimal = 0;
	unsigned int base2 = 1;
	unsigned int len = 0;

	if (b == NULL)
		return (0);

	/* get the length of binary number */
	while (b[len] != '\0')
		len++;

	for (index = (len - 1); index >= 0; index--)
	{
		if (b[index] != '1' && b[index] != '0')
			return (0);

		if (b[index] == '1')
			in_decimal += (base2);
		base2 *= 2;
	}

	return (in_decimal);
}
