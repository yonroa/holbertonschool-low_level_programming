#include <stdio.h>

/**
 * main - Print the number of arguments passed
 * @argc: Lenght of argv
 * @argv: Array of size argc
 *
 * Return: 0
 */
int main(int argc,__attribute__((unused)) char *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
