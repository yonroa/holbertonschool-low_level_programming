#include <stdio.h>

/**
 * main - Print the differents size of types
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: " + sizeof(char) + "byte(s)\n");
	printf("Size of an int: " + sizeof(int) + "bytes(s)\n");
	printf("Size of a long int: " + sizeof(long int) + "byte(s)\n");
	printf("Size of a long long int: " + sizeof(long long int) + "byte(s)\n");
	printf("Size of a float: " +  sizeof(float) + "byte(s)\n");
	return (0);
}

