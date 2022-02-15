#include "main.h"

/**
 * times_table - print one table from the table 0 to the table 9
 */
void times_table(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 <= 9; n1++)
	{
		_putchar(48);
		for (n2 = 1; n2 <= 9; n2++)
		{
			_putchar(44);
			_putchar(' ');
			if ((n1 * n2) <= 9)
			{
				_putchar(' ');
				_putchar((n1 * n2) + 48);
			}
			else
			{
				_putchar(n1 * n2);
			}
		}
	}
	_putchar('\n');
}
