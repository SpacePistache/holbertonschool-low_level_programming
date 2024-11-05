#include "main.h"
#include <stdio.h>
/**
 * _strspn - string span.
 * @s: Is variable
 * @accept: doin things
 *
 * Return: returning the span.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
				else if (accept[j + 1] == '\0')
					return (i);
			else

				continue;

		}

	}

	return (0);
}
