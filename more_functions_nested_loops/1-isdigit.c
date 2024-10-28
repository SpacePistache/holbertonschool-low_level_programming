#include "main.h"
/**
 * _isdigit - checks to see if the character is a digit.
 *@c: is numerical value.
 * Return: 1 for digit, 0 for anything else.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
