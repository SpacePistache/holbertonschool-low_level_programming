#include "main.h"
#include <stdlib.h>
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
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *result;

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}
	if (n > len2)
	{
		n = len2;
	}

	result = malloc(len1 + n + 1);
	if (!result)
	{
		return (NULL);
	}
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
