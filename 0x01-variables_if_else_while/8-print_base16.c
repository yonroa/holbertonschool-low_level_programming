#include <stdio.h>

/**
 * main - print on hexadecimal
 *
 * Return: 0
 */
int main(void)
{
	int n = 30;
	int u = 61;

	while (n <= 39)
	{
		putchar('0' + n);
		n++;
	}
	while (n <= 66)
	{
		putchar('0' + u);
		u++;
	}
	putchar('\n');
	return (0);
}
