#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to 9
 * excepting 2 and 4
 */

void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i != 50 || i != 52)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
