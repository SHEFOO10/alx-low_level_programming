#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - allocate new space and assign string to it
 *
 * @str: string
 *
 * Return: NULL if str = NULL or return pointer point duplicated string
 */

char *_strdup(char *str)
{
	char *dup = malloc(sizeof(char) * sizeof(*str));

	if (dup == NULL)
	{
		return (NULL);
	}

	
	for(int i = 0; i < (int)sizeof(*str);i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
