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
	char *dup = malloc(sizeof(char) * sizeof(*str));

	if (dup == NULL)
	{
		return (NULL);	
	}

	while (*str != '\0')
	{
		*dup = *str;
		dup++;
		str++;
	}
	*dup = '\0';
	dup = &dup[0];

	return (dup);
}
