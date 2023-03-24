#include "variadic_functions.h"

/**
 * print_strings -  a function that prints strings
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i = 0;
	va_list str_list;
	char *str;

	va_start(str_list, n);

	for (i ; i < n; i++)
	{
		str = va_arg(str_list, char *);
		if (!str)
			str = "(nil)";

		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else 
			printf("%s%s", separator, str)

	}

	
	printf("\n");
	
	va_end(str_list);
}

