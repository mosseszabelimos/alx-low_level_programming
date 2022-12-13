#include "main.h"
/**
 * print_sign: - prints the sign of a number
 * @n: is the number to be determined
 * Returns: 1 if the number is greather than zero
 * 0 if zero
 * -1 and prints if the number is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
