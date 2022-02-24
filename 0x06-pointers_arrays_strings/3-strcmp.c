#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: 15 if s1 > s2
 * -15 if s1 < s2
 *  0 if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
	int u = 0;
	int i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[u] != '\0')
	{
		u++;
	}
	if (*s1 < *s2)
	{
		return (-(*s2 - *s1));
	}
	else if (*s1 > *s2)
	{
		return (*s1 - *s2);
	}
	else
	{
		return (0);
	}
}
