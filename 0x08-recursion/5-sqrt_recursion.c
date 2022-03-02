#include "main.h"

int verify_sqrt(int n, int i);

/**
 * _sqrt_recursion - Return the natural square
 * root of a number
 *
 * @n: Number to be operated
 *
 * Return: The natural square or -1 if don't have it
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (verify_sqrt(n, 0));
}

/**
 * verify_sqrt - Check if n has exact root and
 * finds it
 *
 * @n: Number to be operated
 * @i: Number to calculate the root
 *
 * Return: The natural square
 * -1 if dont't have it
 */
int verify_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (verify_sqrt(n, i + 1));
}
