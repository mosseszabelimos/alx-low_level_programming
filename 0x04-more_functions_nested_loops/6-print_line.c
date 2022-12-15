#include "main.h"

/**
 * print line - print stright line
 * @n: prefix
 * Return: nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
