#include <stdio.h>

/**
 * main - print differents combinations from 0 to 99
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int u;

	for (n = 0; n < 100; n++)
	{
		for (u = 0; u < 100; u++)
		{
			if (n < u)
			{
				putchar((n/10) + 48);
				putchar((n%10) + 48);
				putchar(' ');
				putchar((u/10) + 48);
				putchar((u%10) + 48);
				if (n != 98 || u != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
