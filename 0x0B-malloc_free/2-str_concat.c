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
	char *result;

	int len1 = 0, len2 = 0, result_len = 0;
	

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	result = malloc(sizeof(char) * (len1 + len2));
	if (result == NULL)
		printf("can't allocate memory");

	for (int i = 0; i <= (len1 + len2); i++)
	{
		if ( i >= (len1 - 1))
			result[i] = s2[i - len1];
		result[i] = s1[i];

	}	

	return (result);
}
