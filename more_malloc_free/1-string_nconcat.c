#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenate two strings.
 * @s1: First string
 * @s2: Second string
 * @n: variable to compare
 *
 * Return: We voidin' boys.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = (s1) ? strlen(s1) : 0;
	unsigned int len2 = (s2) ? strlen(s2) : 0;
	char *result;

	if (n > len2)
	{
		n = len2;
	}

	result = malloc(len1 + n + 1);
	if (!result)
	{
		return (NULL);
	}

	if (s1)
	{
		strcpy(result, s1);
	}

	if (s2)
	{
		strncpy(result + len1, s2, n);
	}

	result[len1 + n] = '\0';

	return (result);
}
