#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0 )
	{
		printf("%d is Positive\n",n);
	}
	
	else if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else if (n < 0) 
	{
		printf("%d is Negative \n", n);
	}
	return (0);
}
