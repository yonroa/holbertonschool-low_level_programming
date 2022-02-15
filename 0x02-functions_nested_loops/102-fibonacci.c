#include <stdio.h>
#include "main.h"

/**
 * main - print the fibonacci numbers until the 50
 *
 * Return: 0
 */
int main(void)
{
	int r = 1;
	long int n1 = 1;
	long int n2 = 2;
	long int n3;

	while (r <= 50)
	{
		if (r != 50)
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
