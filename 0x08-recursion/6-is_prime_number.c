#include "main.h"

int divi(int num, int div);
int is_prime_number(int num);

/**
 * is_prime_number - functions that tells the prime number
 * @n: entry number
 * Return: value 1 or 0
 */

int divi(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (divi(num, div + 1));
}
