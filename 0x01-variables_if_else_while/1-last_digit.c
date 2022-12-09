#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -Entry point
 * 
 * Return: Always 0 (sucess)
 *     */
int main(void)
{
	int n, x;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	x =n % 10;
	if (n > 5)
	{
		printf("%d and is greather than 5\n", x);
	}
	else if ((n > 6) && (n < 0))
	{
		printf("%d and is less than 6 and not 0\n", x);
	}
	else 
	{
		printf("%d and is 0\n", x);
	}
	return (0);
}
