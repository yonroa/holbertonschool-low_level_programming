#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: A positive value if s1 > s2
 * A negative value if s1 < s2
 *  0 if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
