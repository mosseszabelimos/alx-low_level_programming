#include "main.h"

/**
 * _strpbrk - a funcltion that searches a string for any of a set of bytes
 * @ch1: the first occurense strings
 * @ch2: matching strings
 * Return: Value 1 or 2
 */

char *_strpbrk(char *ch1, char *ch2)
{
	int x;

	while (*ch1)
	{
		for (x = 0; ch2[x]; x++)
		{
			if (*ch1 == ch2[x])
				return (ch1);
		}
		ch1++;
	}
	return ('\0');
}
