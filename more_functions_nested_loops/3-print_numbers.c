#include "main.h"
/**
 *print_numbers - displays numbers from ascii.
 *
 *Return: None, using void.
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		_putchar(c);
	_putchar('\n');	

}
