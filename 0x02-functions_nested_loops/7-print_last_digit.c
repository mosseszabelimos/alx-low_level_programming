#include "main.h"
/**
 * print_last_digit- prints the last digit
 * @x: to be checked
 * Return: value of the last
 */

int print_last_digit(int x)
{
	int z;

	if( x < 0)
		x = -x;
	z = x % 10;
	if (z < 0)
		z = -z;
	_putchar(a+'0');
	return (z);
}
