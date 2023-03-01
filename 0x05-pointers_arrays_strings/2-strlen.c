/**
 * _strlen(char *s) - how many chars does string have
 *
 * @s: pointer that point to variable address
 *
 * Description: compute the lenth of string
 *
 * Return: int (success)
 */

int _strlen(char *s)
{
	
	for(int len = 0; *s != '\0'; ++s)
		++len;

	return len;
}
