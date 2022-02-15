#include "main.h"

/**
 * print_alphabet - print the alphabet
 */
void print_alphabet(void)
{
	int n = 97;

	while (n < 123)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
