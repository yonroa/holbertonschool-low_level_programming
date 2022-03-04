#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int _isdigit(char *c);
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: Lenght of argc
 * @argv: Array of size argc
 *
 * Return: 0 if the sum is right or 1 if is not
 */
int main(int argc, char *argv[])
{
	int num = 0, sum = 0;

	if (argc == 2 && _isdigit(argv[1]) == 0)
	{
		if (atoi(argv[1]) > 0)
		{
			while (sum < atoi(argv[1]))
			{
				if (sum + 25 <= atoi(argv[1]))
					sum += 25;
				else if (sum + 10 <= atoi(argv[1]))
					sum += 10;
				else if (sum + 5 <= atoi(argv[1]))
					sum += 5;
				else if (sum + 2 <= atoi(argv[1]))
					sum += 2;
				else if (sum + 1 <= atoi(argv[1]))
					sum += 1;
				num++;
			}
		}
		else
		{
			printf("0\n");
			return (0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", num);
	return (0);
}

/**
 * _isdigit - Verify if c is a digit
 *  @c: Character to be verified
 *  Return: 1 if c is not a digit
 *  0 if is
 */
int _isdigit(char *c)
{
	if (!c || !*c)
		return (0);
	if (!isdigit(*c) && *c != '-')
		return (1);
	return (_isdigit(c + 1));
}
