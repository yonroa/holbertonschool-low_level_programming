#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int _isdigit(char *c);
/**
 * main - Multiplies two positive numbers
 * @argc: Size of array argv
 * @argv: Array of size argc
 *
 * Return: 0 if everything is ok
 */
int main(int argc, char *argv[])
{
	long int num1, num2, num3;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = _isdigit(argv[1]);
	num2 = _isdigit(argv[2]);
	if (num1 != 0 || num2 != 0)
	{
		printf("Error\n");
		exit(98);
	}
	num3 = atoi(argv[1]) * atoi(argv[2]);
	printf("%ld\n", num3);
	return (0);
}

/**
 * _isdigit - Verify if c is a digit
 * @c: Character to be verified
 * Return: -1 if c is not a digit
 * 0 if is
 */
int _isdigit(char *c)
{
	if (!c || !*c)
		return (0);
	if (!isdigit(*c))
		return (-1);
	return (_isdigit(c + 1));
}
