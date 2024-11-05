#include "main.h"
/**
 * *_memcpy - copying strings.
 * @dest: Is variable
 * @src: doin things
 * @n: int variable
 * Return: returning the dest.
 */
char *_memcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
