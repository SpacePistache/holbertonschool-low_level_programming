#include "main.h"

/**
 * check_prime - Recursive function to check if a number is prime.
 * @n: The number to be checked.
 * @i: The current divisor to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
