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
	int i = 0;
	int len = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
		len++;

	dup = malloc(len * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for ( ; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
