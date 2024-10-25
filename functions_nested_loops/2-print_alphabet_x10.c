#include "main.h"
/**
* print_alphabet_x10 - check the code
*
* Return: Always 0.
*/

void print_alphabet_x10(void)
{

	int i;

	for (i = 0; i < 10; i++)
	{
		int al;

		for (al = 97; al < 123; al++)
			_putchar(al);
		_putchar('\n');
	}
}
