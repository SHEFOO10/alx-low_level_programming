#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - convert binary number to intger
 *
 * @b: the binary number
 *
 * Return: the converted number if success, on fail return 0.
*/

unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int d_number = 0, bin_power;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (bin_power = 1; len >= 1; len--, bin_power *= 2)
		if (b[len - 1] == '1')
			d_number += bin_power;

	return (d_number);
}
