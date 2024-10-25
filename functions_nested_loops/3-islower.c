#include "main.h"

/**
 *_islower - checks for a lowercase letter.
 *@c: is the value
 *Return 1 for lowercase 0 for anything else.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
