#include "main.h"

/**
 * _strcmp - compares strings
 * @ch1: first entry
 * @ch2: second entry
 * Return: value
 */

int _strcmp(char *ch1, char *ch2)
{
	while (*ch1 && *ch2 && *ch1 == *ch2)
	{
		ch1++;
		ch2++;
	}
	return (*ch1 - *ch2);
}
