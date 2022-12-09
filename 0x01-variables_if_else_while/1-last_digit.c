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
	x = n % 10;
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greather than 5\n", n, x);
	}
	else if ((x < 6) && (x < 0))
	{
		printf("Last digit of %d and is %d less than 6 and not 0\n", n, x);
	}
	else 
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	return (0);
}
