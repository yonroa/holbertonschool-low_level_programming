#include "main.h"

/**
 * *_strncpy - Copies a string until the byte n
 * @dest: String 1
 * @src: String 2
 * @n: Number of bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int u = 0;
	int i = 0;
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
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
