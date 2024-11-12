#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array.
 *
 * @c: character to intialise with.
 * @size: Size of the array.
 *
 * Return: The array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
