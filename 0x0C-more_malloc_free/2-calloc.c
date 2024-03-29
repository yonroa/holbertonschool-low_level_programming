#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Allocates memory for an array
 * @nmemb: Number of elementes
 * @size: Size of the elements
 * Return: A pointer to the memory of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*(str + i) = 0;

	return (str);
}
