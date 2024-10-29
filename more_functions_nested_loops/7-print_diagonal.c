#include "main.h"
/**
 *print_diagonal - print numbers except for two values.
 *@n: variable.
 *Return: None, using void.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
		_putchar('\n');
	
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}	
	}
	
	_putchar('\n');
}
