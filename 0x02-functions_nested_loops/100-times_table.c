#include "main.h"
/**
 * print_times_table- Prints the num times table
 * @num: is the input number
 * Return: the result
 */

void print_times_table(int num)
{
	int x, y, z;

	if (num >= 0 && num <= 20)
	{
		for (x = 0; x <= num; x++)
		{
			for (y = 0; y <= num; y++)
			{
				z = y * x;
				if (y == 0)
				{
					_putchar(z + '0');
				} else if (z < 10 && y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				} else if (z >= 10 && z < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				} else if (z >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((z / 100) + '0');
					_putchar(((z /10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

