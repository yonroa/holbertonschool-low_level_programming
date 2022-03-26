#include "holberton.h"

/**
 * display_complex_number - displays the complex numbers
 * followed by a new line
 * @c: Complex number
 */
void display_complex_number(complex c)
{
	printf("%0.f", c.re);
	if (c.im > 0)
		printf(" + ");
	else if (c.im < 0)
	{
		printf(" - ");
		c.im = c.im * -1;
	}
	if (c.im == 1 || c.im == -1)
		printf("i");
	else if (c.im != 0)
		printf("%0.fi", c.im);
	printf("\n");
}
