#include "main.h"
/**
 * factorial - calculating the factorial.
 * @n: is the factorial.
 *
 * Return: we're returning n.
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
