#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: entry 1
 * @height: entry 2
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
