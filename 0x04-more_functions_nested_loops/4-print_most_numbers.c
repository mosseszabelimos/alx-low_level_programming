#include "main.h"

/**
 * print_most_numbers - print from 0 to 9
 * Return: 0;
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		{
			if (i != '2' && i != '4')
			{
				_putchar(i);
			}
		}
	
	_putchar('\n');
}
