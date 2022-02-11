#include <stdio.h>

/**
 * main - print the combination of differents numbers
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int u;

	for (n=48; n <= 56; n++)
	{
		for (u=49; u <= 57; u++)
		{
			if (u > n)
			{
				putchar(n);
				putchar(u);
				if (n != 56 || u != 57)
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
