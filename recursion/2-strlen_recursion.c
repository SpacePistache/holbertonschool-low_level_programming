#include "main.h"
/**
 * _strlen_recursion - printing in reverse characters.
 * @s: pointer.
 *
 * Return: We voidin' boys.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
