#include "main.h"

/**
 * print_times_table - print the tables from 0 to n
 * @n: NUmber of the table
 */
void print_times_table(int n)
{
	int n1;
	int n2;

	if (n >= 0 || n <= 15)
	{
		for (n1 = 0; n1 <= n; n1++)
		{
			for (n2 = 0; n2 <= n; n2++)
			{
				if ((n1 * n2) == 0)
				{
					_putchar((n1 * n2) + 48);
				}
				else if ((n1 * n2) <= 9 && n2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((n1 * n2) + 48);
				}
				else if ((n1 * n2) >= 10 && (n1 * n2) < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((n1 * n2) / 10) + 48);
					_putchar(((n1 * n2) % 10) + 48);
				}
				else if ((n1 * n2) >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((n1 * n2) / 100) + 48);
					_putchar(((n1 * n2) / 10) + 48);
					_putchar(((n1 * n2) % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
