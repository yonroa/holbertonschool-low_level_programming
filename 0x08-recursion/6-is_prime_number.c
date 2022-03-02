#include "main.h"

int verify_prime(int n, int i);
/**
 * is_prime_number - Return if the number is prime
 * @n: Number to be checked
 *
 * Return: 1 if the number is prime
 * 0 if is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (verify_prime(n, n - 1));
}

/**
 * verify_prime - Check if the number is prime
 * @n: Number to be checked
 * @i: Number to check
 *
 * Return: 1 if n is prime
 * 0 if is not
 */
int verify_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (verify_prime(n, i - 1));
}
