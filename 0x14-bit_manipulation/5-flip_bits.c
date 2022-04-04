#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to
 * flip to get from one number to another
 * @n: First number
 * @m: Second number
 * Return: The number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int counter = 0;
	unsigned long int exclusion = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		if ((exclusion >> i) & 1)
			counter++;
	}
	return (counter);
}
