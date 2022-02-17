#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 14 
 * ten times
 */

void more_numbers(void)
{
	int i;
	int u;

	for (i = 0; i < 10; i++)
	{
		for (u = 0; u <= 14; u++)
		{
			if (u > 9)
			_putchar((u / 10) + 48);
			_putchar((u % 10) + 48);
		}
		_putchar('\n');
	}
}
