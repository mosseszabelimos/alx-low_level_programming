#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of array followed by new line
 * @x: is entry
 * @num: is the number of elements;
 * Return: 0
 */

void print_array(int *x, int num)
{
	int y;

	for (y = 0; y < num; i++)
	{
		printf("%d", x[y]);
		if (y != num - 1)
		{
			printf(" ");
			printf(" ");
		}
	}
	printf("\n");
}
