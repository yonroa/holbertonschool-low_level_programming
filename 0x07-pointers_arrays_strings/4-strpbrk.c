#include "main.h"

/**
 * *_strpbrk - Searches a string for any of a set of bytes
 * @s: String to be checked
 * @accept: Bytes to be compared
 *
 * Return: A pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int h = 0;
	int k = 0;

	while (s[h] != '\0')
		h++;
	while (accept[k] != '\0')
		k++;

	for (i = 0; i < h; i++)
	{
		for (j = 0; j <= k; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (&s[i]);
}
