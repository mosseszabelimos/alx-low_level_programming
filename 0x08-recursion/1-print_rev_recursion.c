#include "main.h"

/**
 * _print_rev_recursion - prints strings in reverse
 * @s: is character string
 * Return: a value 0 or 1
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
