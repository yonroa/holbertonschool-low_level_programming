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
	int j = 0;

	while (s[i] != '\0' && j == 0)
	{
		if (s[i] == c)
		{
			j = 1;
			return (&s[i]);
		}
		i++;
	}
	return (&s[i]);
}