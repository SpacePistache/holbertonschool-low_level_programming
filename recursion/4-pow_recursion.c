#include "main.h"
/**
 * _pow_recursion - value of x to the power of y.
 * @x: is value to be calculated
 * @y: value in the calculation
 *
 * Return: we're returning the value of x.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
