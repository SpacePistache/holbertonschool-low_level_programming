#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Freeing the grid.
 * @grid: Freeing the grid
 * @height: Height
 *
 * Return: We voidin' boys.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
