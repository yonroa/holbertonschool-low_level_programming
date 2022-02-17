#include <stdio.h>

/**
 * main - print the largest prime factor to n
 *
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int i = 2;

	while (i < n)
	{
		if (n % i == 0)
		{
			n = n / i;
			i = 2;
		}
		else
		{
			i++;
		}
	}
	printf("%li\n", n);
	return (0);
}
