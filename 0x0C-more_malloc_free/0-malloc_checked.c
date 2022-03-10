#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - Allocates memory using malloc
 * @b: Size of malloc
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
