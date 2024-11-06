#include "main.h"
#include <stddef.h>
/**
 * _strspn - string span.
 * @s: Is variable
 * @accept: doin things
 *
 * Return: returning the span.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}

		haystack++;
	}

	if (*needle == '\0')
	{
		return (haystack);
	}

	return (NULL);

}
