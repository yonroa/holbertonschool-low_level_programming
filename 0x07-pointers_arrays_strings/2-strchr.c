#include "main.h"

/**
 * *_strchr - Locates a character in a string
 * @s: String to be checked
 * @c: Character to be searched
 *
 * Return: The character if is present
 * Null if the character is not present
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char **f = &s;

	while (f[i] != '\0')
	{
		if (f[i] == c)
		{
			return (f[i]);
			break;
		}
		i++;
	}
	return (f[i]);
}
