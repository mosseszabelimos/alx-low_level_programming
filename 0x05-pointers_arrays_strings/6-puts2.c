#include "main.h"

/**
 * puts2 - function prints every other of a string
 * @ch: entry
 * Return: 0
 */

void puts2(char *ch)
{
	int x = 0;

	while (ch[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(ch[x]);
		}
		x++;
	}
	_putchar('\n');
}
