#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * **alloc_grid - Doing a grid thing.
 * @width: width of grid
 * @height: height of grid.
 *
 * Return: grid.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i > 0)
				free(grid[--i]);
		free(grid);
			return (NULL);
		}

	memset(grid[i], 0, width * sizeof(int));
	}

	return (grid);
}
