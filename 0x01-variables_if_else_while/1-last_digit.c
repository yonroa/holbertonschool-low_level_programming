#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of n and a message
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	u = n % 10;
	if (u > 5)
	{
		printf("Last digit of %i is %i and is greater than 5", n, u);
	}
	else if (u < 6 && u != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0", n, u);
	}
	else
	{
		printf("Last digit of %i is %i and is 0");
	}
	return (0);
}
