#include  <stdio.h>
/**
 * *string_toupper - lower/uppercase converter.
 * @s: is character
 *
 * Return: returning the characters.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}

		i++;
	}

	return (s);
}
