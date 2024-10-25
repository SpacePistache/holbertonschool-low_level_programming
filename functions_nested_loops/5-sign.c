#include "main.h"
/**
 *print_sign - prints a number positive or negavtive.
 *@n: replaced by the number called by print_num.
 *Return: 1 for positive number, 0 if zero, -1 if negative number.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
