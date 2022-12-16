#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of the number
 * Return: Always 0 (Success)
 */

int main(void)
{
	long x, z;
	long num = 612852475143;
	double sq = sqrt(num);

	for (x = 1; x <= sq; x++)
	{
		if (num % x == 0)
		{
			z = num / x;
		}
	}
	printf("%ld\n", z);
	return (0);
}
