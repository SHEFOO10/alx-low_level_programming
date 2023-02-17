#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/*
 *  tell the user what the random number is 
 *   
 *
 */


int main(void)
{
	/* this the main function*/	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
