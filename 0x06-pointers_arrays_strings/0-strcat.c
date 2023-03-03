#include "main.h"


/**
 * _strcat(char *dest, char *src) - concatenate string to another one
 *
 * @dest: take the destination variable that we will add to it another string
 * @src: this variable will be add to destination variable
 *
 *
 * Description: Concatenate string with another
 *
 * Return: string
 *
 */

char *_strcat(char *dest, char *src)
{
	while(*dest != '\0')
	{
		dest++;
	}

	
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;

	}

	*dest = '\0';

	return dest;
}
