#include <stdio.h>
/**
 * main- Even Liberachi
 *
 * Return: 0
 */

int main(void)
{
	int x;
	unsigned long int y, z, num1, sum;

	y = 1;
	z = 2;
	sum = 0;

	for (x = 1; x <= 33; x++)
	{
		if (y < 4000000 && (y % 2) == 0)
		{
			sum += y;
		}
		num1 = y + z;
		y = z;
		z =  num1;
	}
	printf("%lu\n", sum);
	return (0);
}
