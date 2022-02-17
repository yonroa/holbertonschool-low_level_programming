#include "main.h"

/**
 * print_line - print a line in the terminal
 * @n: Lenght of the line
 */

void print_line(int n)
{
	if (n > 0)
	{
		_putchar(95) * n;
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
