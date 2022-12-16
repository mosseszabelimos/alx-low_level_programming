#include "main.h"

/**
 * print_trinagle - prints the triangle
 * @size: the size of the triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		_putchar('\n');
	for (x = 1; x <= size; x++)
	{
		for (y = size - x; y > 0; y--)
		{	
			_putchar(32);
		}
		for (z = 0; z < x; z++)
		{
			_putchar(35);
		}
			_putchar('\n');
		}
	}
}
