#include <stdio.h>

/**
 * main - print the alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	int n = 122;

	while (n > 96)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
