#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Binary number
 * Return: The converted number
 * 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	int i, digit, num, position = 0;
	unsigned int UnsInt = 0;
	int len = strlen(b);

	if (!b)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	num = atoi(b);
	while (num > 0)
	{
		digit = num % 10;
		if (digit == 1)
			UnsInt = UnsInt + (1 << position);
		position++;
		num = num / 10;
	}
	return (UnsInt);
}
