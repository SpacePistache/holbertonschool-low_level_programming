#include "main.h"
/**
 * print_rev - swapping ints.
 * @s: Is variable
 *
 * Return: we voidin' today boys.
 */
void print_rev(char *s)
{

	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i - 1 >= 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');

}
