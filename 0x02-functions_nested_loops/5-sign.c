#include "main.h"

/**
 * print_sign - check if the number is positive,
 * negative, or zero
 * @n: number to be checked
 *
 * Return: 1 if n is positive, 0 if n is zero
 * and -1 if n is negative
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar(43);
		return (1);
	}
	else if (n <= -1)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
