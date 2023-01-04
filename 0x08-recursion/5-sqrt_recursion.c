#include "main.h"

/**
 * _sqrt_recursion - gives the natural square root of anumber
 * @n: is the entry number
 * Return: value  1 or 0
 */

int _sqrt_recursion(int n)
{
	int sq = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqr(n, sq));
}
/**
 * sqr - gives the square root result
 * @n: first entry
 * @sq: second entry
 * Return: value 0 or 1
 */

int sqr(int n, int sq)
{
	if ((sq * sq) == n)
		return (sq);
	if (sq == n / 2)
		return (-1);
	return (sqr(n, sq + 1));
}

