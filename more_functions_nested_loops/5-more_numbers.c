#include "main.h"
/**
 *print_most_numbers - print numbers except for two values.
 *
 *Return: None, using void.
 */
void more_numbers(void)
{
	int i, num;

	for (i = 0; i > 10; i++)
	{
		for (num = 0; < 9; num++)		
	
	
		_putchar(('0' + num / 10));
		_putchar(('0' + num % 10));
	}
		_putchar(num);
		_putchar('\n');
		
}
