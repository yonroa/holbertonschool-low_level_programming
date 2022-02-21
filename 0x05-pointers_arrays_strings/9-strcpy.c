#include "main.h"

/**
 * *_strcpy - copy the content of src to dest
 * @dest: Destiny
 * @src: Origin
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int u = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (u <= i)
	{
		dest[u] = src[u];
		u++;
	}
	return (dest);
}
