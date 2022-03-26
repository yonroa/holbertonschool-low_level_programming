#include "holberton.h"
/**
 * conjugate - Returns the conjugate of a given complex number
 * @c: Complex number
 * Return: The conjugate of c
 */
complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}
