#include "main.h"

/**
 * this function print_alphabet_x10 : Entry Point
 * prints a to z 10 times
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}


