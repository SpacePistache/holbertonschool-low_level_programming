#include "main.h"
/**
 * factorial - calculating the factorial.
 * @n: is the factorial.
 *
 * Return: we're returning n.
 */
int factorial(int n)
{
	if (n <= 0)
		return (1);
	return (n * factorial(n - 1));
}
