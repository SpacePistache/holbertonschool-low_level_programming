#include "main.h"
/**
 * _abs - finds the absolute value of an integer.
 * @x: represents the integer.
 * Return: x for positive number.
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}