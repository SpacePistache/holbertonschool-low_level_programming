#include "main.h"
/**
 *swap_ - swapping ints.
 *@temp: is temporary variable.
 *@a: Is variable
 *@b: is variable to be swapped.
 *Return: we voidin' today boys.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
