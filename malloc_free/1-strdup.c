#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Creates a duplicate of a given string.
 * @str: The original string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory
 * or str is NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(len + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
