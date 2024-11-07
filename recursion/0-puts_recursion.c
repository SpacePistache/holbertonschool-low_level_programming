#include "main.h"
/**
 * _puts_recursion- print a string one char at a time.
 * @s: pointer
 *
 * Return: We voidin' today boys
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);

	_puts_recursion(s + 1);
}
