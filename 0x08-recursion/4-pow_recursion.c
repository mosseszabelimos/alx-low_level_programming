#include "main.h"

/**
 * _pow_recursion - gives the value of x raised by power of three
 * @x: first entry
 * @y: second entry
 * Return: -1 and 0
 */

int _pow_recursion(int x, int y)
{
	int pow = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		pow = pow * _pow_recursion(x, y - 1);
	return (pow);
}
