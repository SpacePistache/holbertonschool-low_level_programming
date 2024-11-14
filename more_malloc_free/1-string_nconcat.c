#include "main.h"
#include <stddef.h>
#include <stdio.h>
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
	int length1 = 0, length2 = 0, i, j;
	char *len1_len2;

	if (s1 != 0)
	{
		return (NULL);
		length1 = strlen(s1);
	}
	if (s2 != 0)
	{
		return (NULL);
		length2 = strlen(s2);
	}
	
	if (n >= length2)
	{
		n = length2;
	}
	len1_len2 = malloc(length1 + n + 1);
	if (len1_len2 == NULL)
	{
		return (NULL); 
	} 

	for (i = 0; i < length1; i++)

}
