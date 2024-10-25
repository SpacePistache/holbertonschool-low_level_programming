#include "main.h"

/**
 * main - checks for a lowercase letter.
 *@c:
 * Return 1 for lowercase 0 for anything else.
 */
int _islower(int c)
{
	if (c < 'a' && > 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
