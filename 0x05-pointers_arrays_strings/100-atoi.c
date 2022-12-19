#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @ch: entry
 * Retrun: value
 */

int _atoi(char *ch)
{
	int x;
	unsigned int y;
	char *z;

	z = ch;
	y = 0;
	x = 1;
	while (*z != '\0' && (*z < '0' || *z > '9'))
	{
		if (*z == '-')
			x *= -1;
		z++;
	}
	if (*z != '\0')
	{
		do {
			y = y * 10 + (*z - '0');
			z++;
		}while (*z >= '0' && *z <= '9');
	}
	return (y * x);
}
