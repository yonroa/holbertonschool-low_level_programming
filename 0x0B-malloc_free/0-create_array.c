#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: Size of the array
 * @c: Character to initialize
 *
 * Return: t
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
		return (NULL);

	t = malloc(sizeof(unsigned int) * size);

	for (i = 0; i <= size; i++)
	{
		t[i] = c;
	}

	return (t);
}
