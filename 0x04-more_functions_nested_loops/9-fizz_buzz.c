#include <stdio.h>

/**
 * main - print the numbers from 0 to 100
 * if the numbers are multiplies of 3 or 5
 * print a special message
 *
 * Return: 0
 */

int main(void)
{
	int n = 2;

	printf("1");

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %i", n);
		}
		n++;
	}
	printf("\n");
	return (0);
}
