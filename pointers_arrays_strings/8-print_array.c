#include  <stdio.h>
/**
 * print_array - print values contained in an array.
 * @a: Is variable
 * @n: Is a variable
 * Return: We voidin' today boys.
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
	{
		printf(", ");
	}

	}
	printf("\n");
}
