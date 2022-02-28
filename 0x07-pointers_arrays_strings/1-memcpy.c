#include "main.h"

/**
 * *_memcpy - Copies memory area
 * @dest: Copy destination
 * @src: Copy source
 * @n: Number of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
