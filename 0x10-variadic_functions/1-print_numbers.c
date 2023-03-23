#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 *
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (*separator == NULL && n == 0)
		return (0);

	va_list numbers;
	int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		printf("%d %s", va_arg(numbers, int), *separator);
}
