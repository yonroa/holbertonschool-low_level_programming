#include "main.h"

/**
 * jack_bauer - print all the minutes of one day
 */
void jack_bauer(void)
{
	int n1;
	int n2;
	int n3;
	int n4;

	for (n1 = 48; n1 <= 50; n1++)
	{
		for (n2 = 48; n2 <= 57; n2++)
		{
			for (n3 = 48; n3 <= 53; n3++)
			{
				for (n4 = 48; n4 <= 57; n4++)
				{
					if (n2 >= 52 && n1 >= 50)
					{
						break;
					}
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
