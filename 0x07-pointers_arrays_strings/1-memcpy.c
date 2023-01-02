#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @x: value to be stored on memmory
 * @y: vlaue to be copied
 * @num: number of bytes
 * Return: value
 */

char *_memcpy(char *x, char *y, unsigned int num)
{
	int i;

	int j = num;

	for (i = 0; i < j; i++)
	{
		x[i] = y[i];
		num--;
	}
	return (x);
}	

