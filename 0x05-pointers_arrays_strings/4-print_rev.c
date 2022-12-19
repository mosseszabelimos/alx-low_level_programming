#include "main.h"

/**
 * print_rev - printing inreverse
 * @ch: is entry
 * Return: 0
 */

void print_rev(char *ch)
{
	int i = 0;

	for (i = 0; ch[i] != '\0'; i++)
	{
		for (i = i - 1; ch[i] != '\0'; i--)
		{
			_putchar(ch[i]);
		}
	}
	_putchar('\n');
}
