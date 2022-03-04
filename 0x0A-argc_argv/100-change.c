#include <stdio.h>
#include <stdlib.h>

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

	if (argc == 2)
	{
		if (atoi(argv[1]) >= 0)
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
			printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", num);
	return (0);
}
