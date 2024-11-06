#include "main.h"
#include <stddef.h>
/**
 * _strstr - finding a string within a string.
 * @haystack: string to compare
 * @needle: string
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
