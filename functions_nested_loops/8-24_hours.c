#include "main.h"
/**
 * jack_bauer - finds the absolute value of an integer.
 * @
 * Return: no need for return because using void.
 */
void jack_bauer(void)

{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');
		}
	}

}
