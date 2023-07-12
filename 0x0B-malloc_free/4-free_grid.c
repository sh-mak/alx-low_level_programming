#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free  2 dimensional grid previously created
 * @grid: 2nd grid
 * @height: height dimensional of grid
 * Description: frees memory of grid
 * Return: nothing
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
