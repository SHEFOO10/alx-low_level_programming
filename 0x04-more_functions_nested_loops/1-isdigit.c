/**
 * _isdigit - function
 *
 * Description: it checks if it's number
 *
 * Return: (0) if it's not a number, (1) if it's a number
 */

int _isdigit(int c)
{
	if ( c >= 48 && c <=57 )
		return 1;
	else
		return 0;
}
