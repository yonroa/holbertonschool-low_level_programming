#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print the natural numbers until 98
 * @n: Start number
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%i", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
		putchar('\n');
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%i", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
		putchar('\n');
	}
	else
	{
		printf('98');
	}
	putchar('\n');
}
