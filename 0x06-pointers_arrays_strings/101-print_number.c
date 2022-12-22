#include "main.h"

/**
 * print_number - prints num
 * @x: entry
 * Return: value
 */

void print_number(int x)
{
	unsigned int num1 = x;

	if (x < 0)
	{
		_putchar('-');
		num1=-num1;
	}
	if ((num1 / 10) > 0)
		print_number(num1 / 10);

	_putchar((num1 % 10) + '0');
}
