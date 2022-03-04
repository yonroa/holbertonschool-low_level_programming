#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Lenght of argc
 * @argv: Array of size argv
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");

	return (0);
}
