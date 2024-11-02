#include "main.h"
/**
 * puts2 - printing a second letter each time.
 * @str: Is variable
 *
 * Return: We voidin' today boys.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
