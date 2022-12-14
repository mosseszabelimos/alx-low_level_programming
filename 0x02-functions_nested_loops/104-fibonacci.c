#include <stdio.h>
/** main- the first 100 fibonachi numbers
 *
 * Return: success
 */

int main(void)
{
	unsigned long int x;
	unsigned long int x1;
	unsigned long int x2;
	unsigned long int y;
	unsigned long int x11;
	unsigned long int x22;
	unsigned long int x111;
	unsigned long int x222;

	x1 = 1;
	x2 = 2;
	y = 1000000000;

	printf("%lu", x1);
	for(x = 1; x < 91; x++)
	{
		printf(", %lu", x2);
		x2 += x1;
		x1 = x2 - x1;
	}
	x11 = (x1 / y);
	x22 = (x1 %  y);
	x111 = (x2 / y);
	x222 = (x2 % y);

	for (x = 92; x < 99; x++)
	{
		printf(", %lu", x111 + (x222 / y));
		printf("%lu", x222 % y);
		x111 = x111 + x11;
		x11 = x111 - x11;
		x222 = x222 + x22;
		x22 = x222 - x22;
	}
	printf("\n");
	return (0);
}

