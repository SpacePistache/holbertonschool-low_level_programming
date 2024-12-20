#include "main.h"
#include <stdio.h> /* for printf */

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{

unsigned long int mask = 1UL << (sizeof(n) * 8 - 1); /* Create a mask */
int started = 0; /* Flag to track when the first '1' is printed */

while (mask > 0)
{
if (n & mask)
{
putchar('1');
started = 1; /* Mark that we've started printing */
}
else if (started)
{
putchar('0');
}
mask >>= 1; /* Shift mask right by 1 */
}

if (!started)
putchar('0');
}
