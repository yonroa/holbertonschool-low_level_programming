#include "main.h"
#include <stdio.h>

/**
 * print_array - print the indicated elements of a array
 * @a: array to be printed
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int u = 0;

	while (u <= n - 1)
	{
		if (u == 0)
		{
			printf("%d", a[u]);
		}
		else
		{
			printf(", %d", a[u]);
		}
		u++;
	}
	printf("\n");
}
