#include "main.h"
/**
 * _islower -checks for lowercase
 *#c: is a character to be checked
 * Return: 1 if c is lowercase, 0 oterwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
