#include "main.h"

/**
 * *_strncat - Concatenates two strings until the byte n
 * @dest: String 1
 * @src: String 2
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int u = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[u] != '\0')
	{
		u++;
	}
	for (j = 0; (j <= u) && (j < n); j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
