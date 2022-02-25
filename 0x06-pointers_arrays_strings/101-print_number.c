#include "main.h"

/**
 * print_number - Print the number n
 * @n: Number to be prited
 */
void print_number(int n)
{
	unsigned int u;

	if (n < 0)
	{
		u = n * -1;
		_putchar('-');
	}
	else
	{
		u = n;
	}
	if (u / 10)
	{
		print_number(u / 10);
	}
	_putchar((u % 10) + 48);
}
