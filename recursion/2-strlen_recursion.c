#include "main.h"
/**
 * _print_rev_recursion - printing in reverse characters.
 * @s: pointer.
 *
 * Return: We voidin' boys.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	_strlen_recursion(s);

	return(s);
}
