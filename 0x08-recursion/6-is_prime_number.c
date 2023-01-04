#include "main.h"

/**
 * is_prime_number - functions that tells the prime number
 * @n: entry number
 * Return: value 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (divi(n, n - 1));
}

/**
 * divi - returns the actual prime number
 * @num: first entry
 * @div: second entry
 * Return: value 0 or 1
 */


int divi(int num, int div)
{
	if (div == 1)
		return (1);
	if (num % div == 0 && div > 0)
		return (0);
	return (divi(num, div - 1));
}
