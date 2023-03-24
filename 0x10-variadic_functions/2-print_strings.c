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

	int i = 0;
	va_list str_list;

	va_start(str_list, n);

	if(!separator)
	{
		return;
	}
	else if (va_arg(str_list, char *) == NULL && separator)
	{
		printf("(nil) %s", separator);
	}
	else
	{
		printf("%s %s", va_arg(str_list, char *), separator);
	}
	printf("\n");
	va_end(str_list);
}

