#include <stdio.h>
#include "main.h"
/**
 * main - Is the function.
 * @argc: Arguments supplied to program
 * @argv: Array of strings
 *
 * Return: Returns the argc and argv
 */
int main(int argc, char *argv[])
{
	int i;

	printf("argc = %d\n", argc);
	
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	return (0);
}
