#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element in the array.
 * @array: The array which will be iterated.
 * @size: The size of the array
 * @action: Pointer to the function
 *
 * Return: Nothing because we voidin' boys.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
