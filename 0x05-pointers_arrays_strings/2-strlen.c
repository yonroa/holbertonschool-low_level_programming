#include "main.h"

/**
 * _strlen - Return the size of an string
 * @s: String to be checked
 *
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s[i] != '\0')
	{
		i++;
	}
	return (i);
}
