#include <stdio.h>
/**
 * main- Prints first 50 fibonachi
 *
 * Return: 0
 */

int main(void)
{
	int x;
	unsigned long num1, num2, sum;
	
	num1 = 0;
	num2 = 1;
	for (x = 0; x < 50; x++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
