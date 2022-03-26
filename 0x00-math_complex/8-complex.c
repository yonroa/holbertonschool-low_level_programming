#include "holberton.h"

/**
 * complex_from_mod_arg - update the real and the imaginary parts
 * of a complex number
 * @m: Modulus of the complex number
 * @arg: Arguments of the complex number
 * @c3: The new complex number
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = (sin(arg) * m);
	c3->im = (cos(arg) * m);
}
