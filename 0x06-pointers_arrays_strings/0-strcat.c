#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: String 1
 * @src: String 2
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
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
	for (j = 0; j <= u; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
