#include "main.h"
/**
 *_isalpha - checks is alphabetic character or not.
 *@c: is a value I think.
 *Return: 1 for alphabetic character, 0 for other.
 */
int _isalpha(int c)
{
	if (c > 65 && c < 123)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

