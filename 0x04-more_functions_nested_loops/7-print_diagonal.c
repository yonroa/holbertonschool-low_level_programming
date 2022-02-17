#include "main.h"

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0;
		int u;

		while (i <= n)
		{
			for (u = 1; u < n; u++)
			{
				_putchar(' ');
				if (u == n+1)
				{
					_putchar('\\');
				}
			}
			n++;
		}
		putchar('\n');

	}
	else
	{
		_putchar('\n');
	}
}
