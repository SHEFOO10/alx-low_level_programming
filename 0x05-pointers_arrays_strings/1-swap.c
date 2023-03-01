/**
 * swap_int - function
 *
 * @a: the first variable
 * @b: the second variable
 *
 * Description: swap values of two variables
 *
 */

void swap_int(int *a, int *b)
{
	int temporary = *a;

	*a = *b;
	*b = temporary;
}
