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
	unsigned int i;
	int result;
	va_list op;

	va_start(op, i);

	for (i = 0; i < n; i++)
	{
		result += va_arg(op, int);
	}
	va_end(op);
	return (result);
}

