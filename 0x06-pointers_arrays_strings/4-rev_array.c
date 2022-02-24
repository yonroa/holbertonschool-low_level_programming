#include "main.h"

/**
 * reverse_array - Reverses the content of an array until the byte n
 * @a: String to be reversed
 * @n: Number of bytes
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int h;
	int u;

	while (a[i] != '\0')
	{
		i++;
	}

	for (u = 0; u < (n / 2); u++)
	{
		h = a[u];
		a[u] = a[n - u - 1];
		a[n - u - 1] = h;
	}
}
