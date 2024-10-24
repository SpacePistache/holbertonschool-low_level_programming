#include "_putchar.c"
#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
int al;

for (al = 97; al <= 123; al++)
	_putchar(al);
_putchar('\n');
}
