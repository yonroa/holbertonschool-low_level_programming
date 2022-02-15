#include <stdio.h>
#include "main.h"

/**
 * main - print the sum of the multiples of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 1; n1 < 1024; n1++)
	{
		if ((n1 % 3) == 0 || (n1 % 5) == 0)
		{
			n2 += n1;
		}
	}
	printf("%i", n2);
	_putchar('\n');
	return (0);
}
