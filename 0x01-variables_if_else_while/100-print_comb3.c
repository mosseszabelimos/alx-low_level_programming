#include <stdio.h>
/**
 * main - Entry  point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num1;
	int num2;

	for (num2 = '0'; num2 <= '9'; num2++)
	{
		for (num1 = '0'; num1 <= '9'; num1++)
		{
			if (!((num2 == num1) || (num2 > num1)))
			{
				putchar(num2);
				putchar(num1);
				if (!(num1 == '9' && num2 == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

