#include "main.h"

/**
 * print_line - print a line in the terminal
 * @n: Lenght of the line
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i = 1;

		while (i <= n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
