#include <stdlib.h>
#include "main.h"

/**
 * free_grid - the function that frees two dimensions grid
 * @grid: the magic function
 * @height: the measurement used
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int b;

	for (b = 0; b < height; b++)
	{
		free(grid[b]);
	}

	free(grid);
}
