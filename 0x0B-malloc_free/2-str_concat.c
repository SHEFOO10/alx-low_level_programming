#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
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

	int len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	int result_len = len1 + len2;
	result = malloc(sizeof(char) * result_len);
	if (result == NULL)
		printf("can't allocate memory");

	for (; i <= (len1 + len2); i++)
	{
		if (i >= (len1 - 1))
		{
			result[i] = s2[i - len1];
		}
		else
		{
			result[i] = s1[i];
		}
	}

	return (result);
}
