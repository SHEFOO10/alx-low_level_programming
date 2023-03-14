#include <stdlib.h>
#include <stddef.h>

/**
 * *_strdup(char *str) - allocate new space and assign string to it
 *
 * @*str: string
 *
 * Return: NULL if str = NULL or return pointer point duplicated string
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);	
	}

	return str;
}
