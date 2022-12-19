#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @x: string value
 * Return: return the length
 */

int _strlen(char *x)
{
	int i = 0;

	while (x[i])
	i++;
	return (i);
}
