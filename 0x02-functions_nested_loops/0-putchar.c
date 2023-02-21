<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Entry Point
 * 
 * Description: print _putchar
 *
 * Return: Always (0) success
 *
 */

int main(void)
{
	printf("_putchar\n");
=======
#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');

>>>>>>> cf6089a6e40abf5bbf41a56aa54e0cbc5c05ac4a
	return (0);
}
