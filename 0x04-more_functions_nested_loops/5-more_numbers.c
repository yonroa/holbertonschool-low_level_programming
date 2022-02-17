#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 14 
 * ten times
 */

void more_numbers(void)
{
	int i = 0;
	int u = 0;

	while (i <= 10)
	{
		while (u <= 14)
		{
			if (u > 9)
			{
				_putchar((u / 10) + 48);
				_putchar((u % 10) + 48);
			}
			u++;
		}
		i++;
		_putchar('\n');
	}
}
