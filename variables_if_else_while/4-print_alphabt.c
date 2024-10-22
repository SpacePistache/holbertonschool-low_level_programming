#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int al;

	for (al = 97; al < 123; al++)
		if (al == 101 || al == 113)
			continue;
		else
			putchar(al);
	putchar('\n');
	return (0);
}
