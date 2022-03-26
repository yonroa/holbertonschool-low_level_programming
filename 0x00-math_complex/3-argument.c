#include "holberton.h"
/**
 * argument - Returns the argument of a given complex number
 * @c: Complex number
 * Return: The argument of a complex number
 */
double argument(complex c)
{
	double arguments;

	arguments = atan2(c.im, c.re);
	return (arguments);
}
