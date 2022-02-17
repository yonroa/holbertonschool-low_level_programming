#include "main.h"

/**
 * print_triangle - print a triangle with the character '#'
 * @size: Size of the triangle
 */

void print_triangle(int size)
{
	int space = size - 1;
	int character = 1;
	int i;
	int u;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (u = 0; u < space; u++)
			_putchar(' ');

			for (u = 0; u < character; u++)
			_putchar('#');
			_putchar('\n');
			character = character + 1;
			space = space - 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
