#include "main.h"

/**
 * print_square - Print a square in the terminal
 * @size: Size of the square
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, u;

		for (i = 0; i < size; i++)
		{
			for (u = 0; u < size; u++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
