#include "main.h"

/**
 * print_line - prints an underscore.
 *@n: is the value given.
 * Return: None, using void.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
