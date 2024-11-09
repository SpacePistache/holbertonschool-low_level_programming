#include "main.h"
#include <stdio.h>
/**
 * main - Is the function.
 * @argc: Arguments supplied to program
 * @argv: Array of strings
 *
 * Return: Returns the argc and argv
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
