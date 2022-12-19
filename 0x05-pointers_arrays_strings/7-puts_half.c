#include "main.h"

/**
 * puts_half - fn that prints half of a string
 * @ch: is entry;
 * Return: 0
 */

void puts_half(char *ch)
{
	int x, xx;

	x = 0;
	
	while (ch[x] != '\0')
		x++;
	xx = x / 2;

	if (x % 2 == 1)
		xx++;
	while (xx < x)
	{
		_putchar(ch[xx]);
		xx++;
	}
	_putchar('\n');
}
