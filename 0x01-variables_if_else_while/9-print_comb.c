#include <stdio.h>

/**
 * main - print numbers from 0 to 9
 *
 * Return: 0
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
