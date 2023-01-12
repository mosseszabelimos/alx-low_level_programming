#include <stdlib.h>
#include "main.h"

/**
 *array_range - creates an array of integers
 * @min: first entry
 * @max: second entry
 * Return: value 0 or 1
 */
int *array_range(int min, int max)
{
	int *loop;
	int x, cap;

	if (min > max)
		return (NULL);
	cap = max - min + 1;
	loop = malloc(sizeof(int) * cap);

	if (loop == NULL)
	return (NULL);
	for (x = 0; min <= max; x++)
	loop[x] = min++;
	return (loop);
}
