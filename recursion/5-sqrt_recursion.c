#include "main.h"
/**
 * _sqrt_recursion - find square root recursively.
 * @n: to find the square root.
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int x = 1;

	if (n < 0)
	{
		x = 1;
		return (-1);
	}
	if (x * x == n)
	{
		int result = x;

		x = 1;
		return (result);
	}
	if (x * x > n)
	{
		x = 1;
		return (-1);
	}
	x++;

	return (_sqrt_recursion(n));
}
