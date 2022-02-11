#include <stdio.h>

/**
 * main - print differents combinations of three digits
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int u;
	int c;

	for (n = 48; n < 58; n++)
	{
		for (u = 49; u < 58; u++)
		{
			for (c = 50; c < 58; c++)
			{
				if ((c > u) && (u > n))
				{
					putchar(n);
					putchar(u);
					putchar(c);
					if (n != 55 || u != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
