#include "main.h"
#include <stddef.h>
/**
 * *_strchr - string character.
 * @s: Is variable
 * @c: doin things
 * Return: returning nothing.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
