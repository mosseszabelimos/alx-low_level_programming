#include "main.h"

/**
 * _puts - prints a string
 * @ch: is the entry
 * Return: 0
 */

void _puts(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
}
