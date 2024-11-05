#include "main.h"
/**
 * *_memset - copying strings.
 * @s: Is variable
 * @b: doin things
 * @n: unsigned int
 * Return: returning the dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
