#include "main.h"

/**
 * print_rev - printing inreverse
 * @ch: is entry
 * Return: 0
 */

void print_rev(char *ch)
{
	int i = 0 ;

	while (ch[i])
		i++;
	
	while (i--)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
}
