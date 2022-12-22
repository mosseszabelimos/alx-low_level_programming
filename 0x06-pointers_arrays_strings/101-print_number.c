#include "main.h"

/**
 * print_number - prints num
 * @x: entry
 * Return: value
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x =-x;
	}
	
	
	if ((x / 10) > 0)
		print_number(x / 10);

	_putchar((x % 10) + '0');
}
