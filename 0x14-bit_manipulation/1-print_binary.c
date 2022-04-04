#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: Number to be converted
 */
void print_binary(unsigned long int n)
{
	int i, button = 0;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			button = 1;
		}
		else if (button == 1)
			_putchar('0');
	}
	if (button == 0)
		_putchar('0');
}
