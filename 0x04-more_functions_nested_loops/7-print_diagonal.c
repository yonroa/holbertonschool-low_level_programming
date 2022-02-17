#include "main.h"

/**
 * print_diagonal - print a '\' in diagonal
 * @n: number of '\'
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int u;

		for (i = 0; i < n; i++)
		{
			for (u = 0; u <= i; u++)
			{
				if (i == u)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
