#include <main.h

/**
 * create_array - creates an array of chars and initalizes 
 * @size: - first Entry
 * @c: -Second Entry
 * Retunr: value 0 or 1
 */

char create_array(unsigned int size, char c)
{
	char mem;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	mem = (char *) malloc(size * sizeof(c));

	if (mem == 0)
	{
		return (NULL);
	}
	else
	{
		x = 0;
		
		while (x < size)
		{
			*(mem + x) = c;
			x++;
		}
		return (mem);
	}
}
