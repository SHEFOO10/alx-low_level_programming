#include "3-calc.h"
#include <stdio.h>

/**
 * main - the entire program
 *
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return (0) on Success , (-1) on Failure
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	int (*func)(int, int);

	if (argc != 4)
		return (98);

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_function(*argv[2]);

	if (!func)
	{
		printf("Error\n");
		return (99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = func(arg1, arg2);
	printf("%d\n", result);
	return (0);


}
