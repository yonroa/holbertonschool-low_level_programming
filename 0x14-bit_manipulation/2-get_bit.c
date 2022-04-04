#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: Number to be scaned
 * @index: Is the index starting from 0
 * Return: The index or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (i < 63)
	{
		if (i == index)
		{
			if ((n >> i) & 1)
				return (1);
			else
				return (0);
		}
		i++;
	}
	return (-1);
}
