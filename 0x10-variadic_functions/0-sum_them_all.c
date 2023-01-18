#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: retun 0 or 1
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pul;
	unsigned int x, res = 0;
	
	va_start(pul, n);
	for (x = 0; x < n; x++)
		res += va_arg(pul, int);
	va_end(pul);
	return (res);
}
