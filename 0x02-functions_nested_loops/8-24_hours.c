#include "main.h"

/**
 * jack_bauer - print all the minutes of one day
 */
void jack_bauer(void)
{
	for (int n1 = 48; n <= 50; n1++)
	{
		for (int n2 = 48; n <= 51; n2++)
		{
			for (int n3 = 48; n <= 53; n3++)
			{
				for (int n4 = 48; n <= 57; n4++)
				{
					_putchar(n1);
					_putchar(n2);
					_putchar(58);
					_putchar(n3);
					_putchar(n4);
					_putchar('\n');
				}
			}
		}
	}
}
