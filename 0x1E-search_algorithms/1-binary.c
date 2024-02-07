#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *					using the Binary search algorithm.
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: the number ofo elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located,
 *			if value is not present in array or if array is NULL, return (-1).
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		mid = left + (right - left) / 2;

		print_array(array, left, right);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}

/**
 * print_array - prints specific portion from the array.
 *
 * @array: a pointer to array.
 * @left: left index specifies what length will wiped.
 * @right: right index specifies what length will be printed.
 */
void print_array(int *array, int left, int right)
{
	int i = 0;

	printf("Searching in array: %d", array[left]);
	for (i = left + 1; i <= right; i++)
	{
		printf(", %d", array[i]);
	}
	printf("\n");
}
