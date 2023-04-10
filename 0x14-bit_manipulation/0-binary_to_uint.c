#include "main.h"

/**
 * binary_to_unit - convert binary number to intger
 *
 *@b: the binary number
 *
 * Return: the converted number if success, on fail return 0.
*/
unsigned int binary_to_unit(const char *b)
{
	int len = strlen(b);
	int position = 0;
	unsigned int d_number = 0;

	if (b == NULL)
		return (0);

	while (len--)
	{
		switch (b[len])
		{
		case '1':
			d_number += pow(2, position);
			position++;
			break;

		case '0':
			position++;
		default:
			break;
		}
	}
	return (d_number);
}
