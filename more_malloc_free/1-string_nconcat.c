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
	unsigned int len1 = 0, len2 = 0;
	char *result;

	len1 = (s1 != NULL) ? strlen(s1) : 0;
	len2 = (s2 != NULL) ? strlen(s2) : 0;

	if (n > len2)
	{
		n = len2;
	}

	result = malloc(len1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		memcpy(result, s1, len1);
	}

	if (s2 != NULL)
	{
		memcpy(result + len1, s2, n);
	}

	result[len1 + n] = '\0';

	return (result);
}
