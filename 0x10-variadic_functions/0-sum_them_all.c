#include "variadic_functions.h"
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

