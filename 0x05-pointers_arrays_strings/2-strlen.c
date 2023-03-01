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
	len = *s / sizeof(char);
	return len;
}
