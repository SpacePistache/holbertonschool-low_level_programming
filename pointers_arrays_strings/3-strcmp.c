#include  <stdio.h>
/**
 * *_strcmp - comparing strings.
 * @s1: string one.
 * @s2: second string to compare.
 * Return: returning the strings.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}

		i++;
	}

	return (s1[i] - s2[i]);
}
