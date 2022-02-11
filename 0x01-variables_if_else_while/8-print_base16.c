#include <stdio.h>

/**
 * main - print on hexadecimal
 *
 * Return: 0
 */
int main(void)
{
	int n = 48;
	int u = 97;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (u < 103)
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
