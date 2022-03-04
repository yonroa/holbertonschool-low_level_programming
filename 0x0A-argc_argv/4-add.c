#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				if (atoi(argv[i]) < 0)
				{
					printf("Error\n");
					return (1);
				}
				else
				{
					sum += atoi(argv[i]);
				}
			}
		}
		printf("%i\n", sum);
	}
	return (0);
}
