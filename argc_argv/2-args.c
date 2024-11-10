#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: Number of arguments supplied to the program
 * @argv: Array of strings containing the arguments (not used here)
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
