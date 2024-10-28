#include "main.h"
/**
 * _isupper - checks if character is uppercase.
 *@c: is the character in question.
 * Return: 1 if uppercase, 0 if lowercase.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
