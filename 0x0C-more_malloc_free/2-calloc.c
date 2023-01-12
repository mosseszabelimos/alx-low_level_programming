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
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 *
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
		
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	return (NULL);
_memset(ptr, 0, nmemb * size);
	return (ptr);
	}

*/

