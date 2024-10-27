#include "main.h"
/**
 * add - addition.
 * @a: first integer to add.
 * @b: second integer to add
 * Return: no need for return because using void.
 */
int add(int a, int b)
{
	int result = a + b;

	if (result < 0)
	{
	_putchar('-');
	result = -result;
	}

	if (result == 0)
	{
		_putchar('0');
	}
	else
	{
	return (result);
	}

	return (result);
}
