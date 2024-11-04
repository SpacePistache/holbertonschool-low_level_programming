#include  <stdio.h>
/**
 * *_strcat - print values contained in an array.
 * @src: Is variable
 * @dest: Is a variable
 * Return: return.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
