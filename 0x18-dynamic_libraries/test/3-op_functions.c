#include "libpy.h"

/**
 * op_add - Sums two numbers
 * @a: First number
 * @b: Second number
 * Return: The sum of the numbers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two numbers
 * @a: First number
 * @b: Second number
 * Return: The subtract of the numbers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two numbers
 * @a: First number
 * @b: Second number
 * Return: The multiplication of the numbers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two numbers
 * @a: First number
 * @b: Second number
 * Return: The division of the numbers
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Obtain the remainder of the division of two numbers
 * @a: First number
 * @b: Second number
 * Return: The remainder of the division of the numbers
 */
int mod(int a, int b)
{
	return (a % b);
}
