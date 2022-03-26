#include "holberton.h"
/**
 * modulus - Returns the modulus of a given complex number
 * @c: Complex number
 * Return: The modulus of c
 */
double modulus(complex c)
{
	double modul;

	modul = sqrt(pow(c.re, 2) + pow(c.im, 2));
	return (modul);
}
