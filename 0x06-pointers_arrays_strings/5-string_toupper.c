#include "main.h"

/**
 * *string_toupper - Changes all lowercase letters to uppercase
 * @s: String to be changed
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	int i = 0;
	int u;

	while (s[i] != '\0')
	{
		i++;
	}

	for (u = 0; u <= i; u++)
	{
		if (s[u] >= 'a' && s[u] <= 'z')
		{
			s[u] = s[u] - 32;
		}
	}
	return (s);
}
