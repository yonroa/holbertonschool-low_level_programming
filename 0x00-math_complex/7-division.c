#include "holberton.h"

/**
 * division - Performs the division operation to complex numbers
 * @c1: First complex number
 * @c2: Second complex number
 * @c3: Division of c1 and c2
 */
void division(complex c1, complex c2, complex *c3)
{
	complex c4, c5, c6;

	c4.re = c2.re;
	c4.im = c2.im;
	c4 = conjugate(c4);
	multiplication(c2, c4, &c5);
	multiplication(c1, c4, &c6);
	c3->re = c6.re / c5.re;
	c3->im = c6.im / c5.re;
}
