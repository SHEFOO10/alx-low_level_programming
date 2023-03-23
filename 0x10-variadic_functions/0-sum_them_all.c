#include "variadic_functions.h"

/**
 * sum_them_all - add all the number together
 *
 * @n: number of numbers
 *
 * Return: (0) if n equal 0 , (sum) if 0 < n
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = n, result;
	va_list op;

	if (i == 0)
		return (0);

	va_start(op, i);

	while (--i)
	{
		result += va_arg(op, int);
	}
	return (result);
}

