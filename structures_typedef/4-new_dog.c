#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - Duplicates a string into newly allocated memory
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if allocation fails
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	copy = malloc(length + 1);

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		copy[i] = str[i];

	copy[length] = '\0';

	return (copy);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
