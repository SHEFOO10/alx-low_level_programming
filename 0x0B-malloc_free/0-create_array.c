#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * Create_array
 *
 * Description: function that creates an array of chars, and initializes it with a specific char.
 * 
 * @size: unsigned int
 * @c : char
 *
 * Return: Null if the size equal 0 or return pointer or return NULL
 *
 *
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0 )
	{
		return NULL;
	}

	char *arr = malloc(size * sizeof(char));

	if ( arr == NULL )
	{
		return arr;
	}

	arr[0] = c;
	return arr;
}
