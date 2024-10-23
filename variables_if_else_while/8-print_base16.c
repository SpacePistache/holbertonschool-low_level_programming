#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int alnum;

for (alnum = '0'; alnum <= '9'; alnum++)
	putchar(alnum);

for (alnum = 97; alnum <= 102; alnum++)
	putchar(alnum);

putchar('\n');

return (0);
}
