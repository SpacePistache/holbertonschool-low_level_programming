#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - Freeing the grid.
 * @grid: Freeing the grid
 * @height: Height
 *
 * Return: We voidin' boys.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit (98);
	}
	return (ptr);
}
