#include <stdio.h>
#include "main.h"
/**
 * print_to_98- prints natural number up to 98
 * @x: is the result
 *Return: the natural numbers
 */

void print_to_98(int x)
{
	int y, z;

	if (x <= 98)
	{
		for (y = x; y <= 98; y++)
		{
			if (y != 98)
				printf("%d, ", y);
			else if (y == 98)
				printf("%d\n", y);
		}

	} else if (x >= 98)
	{
		for (z = x; x >= 98; z--)
		{
			if (z != 98)
				printf("%d, ", z);
			else if (z == 98)
				printf("%d\n", z);
		}
	}
}

