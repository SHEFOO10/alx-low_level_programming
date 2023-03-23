#include "3-calc.h"

/**
 * op_add - return the sum of a and b
 *
 * @a: first number
 * @b: second number
 *
 * Return: the sum of them
 */


int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - returns the difference of a and b
 *
 * @a: first number
 * @b: second number
 *
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 *
 * @a: first number
 * @b: second number
 *
 * Return: the product of a and b
 */


int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of division
 *
 * @a: first number
 * @b: second number
 *
 * Return: the result of division
 */

int op_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}


/**
 * op_mod - returns the reminder of the division
 *
 * @a: first number
 * @b: second number
 *
 * Return: the reminder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
