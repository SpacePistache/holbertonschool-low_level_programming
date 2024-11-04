#include  <stdio.h>
/**
 * cap_string - capitalizing strings.
 * @s: Is variable
 *
 * Return: returning the s.
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -= ('a' - 'A');
	}
	i++;

	while (s[i] != '\0')
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i - 1] == separators[j] && s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= ('a' - 'A');
				break;
			}
		}
		i++;
	}
	return (s);
}
