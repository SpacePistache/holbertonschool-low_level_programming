#include <stdio.h>
#include <stdlib.h> /* Required for exit() */
#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
    return (a + b);
}


int op_sub(int a, int b)
{
    return (a - b);
}


int op_mul(int a, int b)
{
    return (a * b);
}


int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a / b);
}

int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a % b);
}