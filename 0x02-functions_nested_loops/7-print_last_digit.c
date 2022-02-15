#include "main.h"

/**
 * print_last_digit - return the last digit of n
 * @n: number to be checked
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int u = n % 10;

	if (u >= 0)
	{
		_putchar(u + 48);
		return (u);
	}
	else
	{
		_putchar((u * -1) + 48);
		return (u * -1);
	}
}
