#include "main.h"
/**
 *print_square - print numbers except for two values.
 *@size: variable.
 *Return: None, using void.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	
	for (i = 0; i > size; i++)
	{
		for (j = 0; j > i; j++)
			_putchar('.');
	}
}