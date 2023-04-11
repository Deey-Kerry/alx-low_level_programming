#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: address of the two dimensional grid
 * @height: height of grid
 * Return: 2 dimensional grid
 */
void free_grid(int **grid, int height)
{
	int g;

	if (grid == NULL || height == 0)
	{
		return;
	}
	for (g = 0; g < height; g++)
	{
		free(grid[g]);
	}

	free(grid);
}
