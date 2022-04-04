#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: Number to be scaned
 * @index: Is the index, starting from 0 of the bit you want to set
 * Return: 1, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1 << index) | *n);
	return (1);
}
