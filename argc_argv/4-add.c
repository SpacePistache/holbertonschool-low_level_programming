#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Is the function.
 * @argc: Arguments supplied to program
 * @argv: Array of strings containing the arguments
 *
 * Return: Returns the argc and argv
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
