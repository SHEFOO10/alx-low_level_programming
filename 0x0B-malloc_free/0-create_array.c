#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *
 * *create_array - creates an nadklfjslkjn
 *
 * @size: unsigned int
 * @c : char
 *
 * Return: Null if the size equal 0 or return pointer or return NULL
 *
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (arr);
	}

	arr[0] = c;
	return (arr);
}
