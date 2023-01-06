#include "main.h"

/**
 * _memset - Fills the memory with the constant n bytes
 * @x: Apointer to the memory area
 * @ch: the character to fill the memory
 * @n: the number of bytes to be filled
 * Return: A value
 */

char *_memset(char *x, char ch, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		x[i] = ch;
		n--;
	}
	return (x);
}
