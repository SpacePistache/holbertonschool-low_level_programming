#include "main.h"
/**
 * puts_half - it does a thing.
 * @str: Is variable
 *
 * Return: We voidin' today boys.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	i = (length % 2 == 0) ? (length / 2) : ((length + 1) / 2);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
