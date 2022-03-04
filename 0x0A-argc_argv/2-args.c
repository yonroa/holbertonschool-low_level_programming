#include <stdio.h>

/**
 * main - Prints all arguments
 * @argc: Lenght of argv
 * @argv: Array of size argc
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
