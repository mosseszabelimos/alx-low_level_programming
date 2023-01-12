#include <stdlib.h>
#include "main.h"	

/**
 * _memset - fills memory with a constant byte
 * @s: First Entry
 * @b: Second Entry
 * @n: Third Entry
 * Return: value 0 or 1	
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}	

/**
 *_calloc - allocates memory for an array
 * @nmemb: first entry 
 * @size: size 
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *loop;

	if (nmemb == 0 || size == 0)
		return (NULL);
	loop = malloc(size * nmemb);
	if (loop == NULL)
	return (NULL);
	_memset(loop, 0, nmemb * size);
	return (loop);
}
