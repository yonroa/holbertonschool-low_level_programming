#include "main.h"
#include <stddef.h>

/**
 * *_strstr - Locates a substring
 * @haystack: String to be checked
 * @needle: Bytes to be compared
 *
 * Return: A pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int h = 0;
	int k = 0;

	while (haystack[h] != '\0')
		h++;
	while (needle[k] != '\0')
		k++;
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < k; j++)
		{
			if (haystack[i] == needle[j] && haystack[i + 1] == needle[j + 1])
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
