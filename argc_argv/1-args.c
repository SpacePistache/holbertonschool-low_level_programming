#include <stdio.h>
#include "main.h"
/**
 * main - Is the function.
 * @argc: Arguments supplied to program
 * @argv: Array of strings containing the arguments
 *
 * Return: Returns the argc and argv
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);

}
