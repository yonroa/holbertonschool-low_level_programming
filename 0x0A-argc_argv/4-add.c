#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int _isdigit(char *c);
/**
 * main - Adds positive numbers
 * @argc: Length of argv
 * @argv: Array of size argc
 *
 * Return: 0 if the sum is successful
 * 1 if is not
 */
int main(int argc, char *argv[])
{
	int i, num;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = _isdigit(argv[i]);
			if (num == -1)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%i\n", sum);
	}
	else
		printf("0\n");

	return (0);
}

/**
 * _isdigit - Verify if c is a digit
 * @c: Character to be verified
 *
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
