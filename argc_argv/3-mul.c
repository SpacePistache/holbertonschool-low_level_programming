#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers provided as command-line arguments
 * @argc: Number of arguments supplied to the program
 * @argv: Array of strings containing the arguments
 *
 * Return: 0 if successful, 1 if the program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
