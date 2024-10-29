#include "main.h"
/**
 *print_diagonal - print numbers except for two values.
 *@n: variable.
 *Return: None, using void.
 */
void print_square(int size)
{
	int i, j;

	size = 2;

	for (size = 2;  size++;)
		_putchar('#');

		for (i = 0; i > size; i++)
	{
		for (j = 0; j > i; j++)	
			_putchar('#');
	}
	_putchar('#');
	_putchar('\n');
	

}
