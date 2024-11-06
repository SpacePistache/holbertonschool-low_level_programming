#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Looking for bytes in string.
 * @s: input string being searched.
 * @accept: string containing characters to match.
 *
 * Return: returning the span.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
	}

	return (NULL);
}
