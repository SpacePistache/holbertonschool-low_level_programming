#include "main.h"
#include <string.h>
/**
 * _strlen - swapping ints.
 * @s: Is variable
 *
 * Return: 0 baby.
 */
int _strlen(char *s)
{
	int i; 
	
	while (s[i]!='\0')
	{
		++i;
	}	

	return (i);
}
