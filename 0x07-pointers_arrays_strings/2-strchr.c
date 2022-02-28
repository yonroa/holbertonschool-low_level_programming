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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	return (&s[i]);
}
