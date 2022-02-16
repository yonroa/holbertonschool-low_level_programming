#include <stdio.h>

/**
 * main - print the first 98 numbers
 * of fibonacci series
 *
 * Return: 0
 */
int main(void)
{
	int r;
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	unsigned long int u1, u2, u3, u4;

	for (r = 1; r <= 91; r++)
	{
		printf("%lu, ", n1);
		n1 = n1 + n2;
		n2 = n1 - n2;
	}
	u1 = n1 / 1000000000;
	u2 = n1 % 1000000000;
	u3 = n2 / 1000000000;
	u4 = n2 % 1000000000;

	for (r = 92; r <= 98; r++)
	{
		printf("%lu, ", u3 + (u4 / 1000000000));
		printf("%lu", u4 % 1000000000);
		u3 = u3 + u1;
		u1 = u3 - u1;
		u4 = u4 + u2;
		u2 = u4 - u2;
	}
	putchar('\n');
	return (0);
}
