#include  <stdio.h>
/**
 * reverse_array - printing the values in reverse.
 * @n: Is variable
 * @a: doin things
 * Return: we voidin' today boys.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
