#include "variadic_functions.h"
<<<<<<< HEAD
#include <stdarg.h>

/**
 * sum_them_all - functions that returns the sum
 *
 * @n: number of args
 *
 * Return: (0) if n equal 0, return the sum on success
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list list;
	int i = n;
	int result;

	va_start(list, n);

	while (--i)
		result += va_arg(list, int);
	va_end(list);

	return (result);
}

=======

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
>>>>>>> c79184873adcfb4687d93ad0b981104dcf5c6524
