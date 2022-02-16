#include <stdio.h>

/**
 * main - print the first 98 numbers
 * of fibonacci series
 *
 * Return: 0
 */
int main(void)
{
	int r = 1;
	long int n1 = 1;
	long int n2 = 2;
	long int n3;

	while (r <= 98)
	{
		if (r != 98)
		{
			printf("%li, ", n1);
		}
		else
		{
			printf("%li\n", n1);
		}
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		r++;
	}
	return (0);
}
