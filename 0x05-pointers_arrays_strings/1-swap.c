#include "main.h"

/**
 * swap_int - a function that swaps the values of two integer
 * @x: is the first entry
 * @y: is the second entry
 * Return: 0
 */

void swap_int(int *x, int *y)
{
	int c;

	c = *x;
	*x = *y;
	*y = c;
}
