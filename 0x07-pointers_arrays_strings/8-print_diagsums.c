#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: the numbers
 * @size: the size
 * Return: 1 or 0
 */

void print_diagsums(int *a, int size)
{
	int x, num1 = 0, num2 = 0;

	for (x = 0; x < size; x++)
	{
		num1 += a[x];
		a += size;
	}

	a -=size;

	for (x = 0; x < size; x++)
	{
		num2 += a[x];
		a -= size;
	}
	printf("%d, %d\n", num1, num2);
}
