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
	int i;
	unsigned int UnsInt = 0;
	int len = strlen(b);

	if (!b)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		UnsInt = (UnsInt * 2) + (b[i] - '0');
	}
	return (UnsInt);
}
