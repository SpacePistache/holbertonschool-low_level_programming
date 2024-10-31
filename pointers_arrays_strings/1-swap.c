#include "main.h"
/**
 * swap_int - swapping ints.
 * @a: Is variable
 * @b: is variable to be swapped.
 *
 * Return: we voidin' today boys.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
