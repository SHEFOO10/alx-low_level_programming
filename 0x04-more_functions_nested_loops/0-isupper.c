#include <stdio.h>
#include "_isupper.h"
/**
 * main - Entry Point
 *
 * Description: checks for uppercase character
 *
 * Return: (1) if c is uppercase
 * 		and (0) if otherwise
 */

int main()
{
	char c;
	c = 'A';
	printf("%c: %d\n", c, _isupper(c));

	c = 'a';
	printf("%c: %d\n", c, _isupper(c));


	return 0;
}
