#include "main.h"

/**
 * print_alphabet_x10 - print ten times the alphabet
 */

void print_alphabet_x10(void)
{
	int u = 1;

	while (u <= 10)
	{
		int n = 97;

		while (n < 123)
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		u++;
	}
}
