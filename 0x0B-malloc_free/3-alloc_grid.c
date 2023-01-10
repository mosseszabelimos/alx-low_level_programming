#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * @width: first entry
 * @height: second entry
 * Return: value 0 or 1
 */
int **alloc_grid(int width, int height)
{
	int **mo;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	mo = malloc(sizeof(int *) * height);

	if (mo == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		mo[i] = malloc(sizeof(int) * width);

		if (mo[i] == NULL)
		{
			for (; i >= 0; i--)
				free(mo[i]);
			free(mo);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			mo[i][j] = 0;
	}
	return (mo);
}
