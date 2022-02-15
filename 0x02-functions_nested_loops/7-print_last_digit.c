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
		return (u);
	}
	else
	{
		return (u * -1);
	}
}
