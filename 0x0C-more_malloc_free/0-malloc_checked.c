#include <stdlib.h>
#include "main.h"
		
/**
 * malloc_checked - allocates memory
 * @b: entry	
 * Return: value 0 or 1
 */
void *malloc_checked(unsigned int b)
{
	void *loop;
	loop = malloc(b);

	if (loop == NULL)
		exit(98);		
	return (ptr);		
}


