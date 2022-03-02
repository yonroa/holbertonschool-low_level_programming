#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: String to be checked
 *
 * Return: The lenght of s
 */
int _strlen_recursion(char *s)
{
	if (!*s || !s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
