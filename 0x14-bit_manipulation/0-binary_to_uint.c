#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b);
	int position = 0;

	unsigned int d_number = 0;

	while (len--)
	{
		switch(b[len])
		{
			case '1':
				d_number += pow(2, position);
				position++;
				break;

			case '0':
				position++;
				break;

			default:
				break;
		}
	}

	return (d_number);
}
