#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - allocating memory.
 * @b:Integer value
 *
 * Return: The pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
