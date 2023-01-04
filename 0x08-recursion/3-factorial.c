#include "main.h"

/**
 * factorial - gives a factorial of a given number
 * @n: in entry number
 * Return: value 1 or 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
	
}
