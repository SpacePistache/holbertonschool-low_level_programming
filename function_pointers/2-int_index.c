#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array
 * @array: The array
 * @size: The number of elements in the array
 * @cmp: compare values also a pointer
 *
 * Return: matching element, or -1 if no match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
