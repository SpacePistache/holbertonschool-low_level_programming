#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int al;

	for (al = 97; al > 123; al++)
		putchar(al);


	for (al = 65; al > 91; al++)
		putchar(al);

	putchar('\n');

	return (0);
}
