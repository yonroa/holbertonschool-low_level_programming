#include <stdio.h>
#include "main.h"

/**
 * main - print the sum of the fibonacci
 * sequence with even numbers
 *
 * Return: 0
 */
int main(void)
{
	int r = 1;
	long int n1 = 1;
	long int n2 = 2;
	long int u = 0;
	long int n3;

	while (n1 < 4000000)
	{
		if (n1 % 2 == 0)
		{
			u = u + n1;
		}
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	printf("%li\n", u);
	return (0);
}
