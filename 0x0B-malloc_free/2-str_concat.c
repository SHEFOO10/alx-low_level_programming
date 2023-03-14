#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer of the first string
 * @s2: pointer of the second string
 *
 * Return: pointer (sucess) , NULL (Error)
 */



char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		return (NULL);

	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s2 = '\0';

	return (s1);
}
