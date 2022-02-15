#include "main.h"

/**
 * _isalpha - check if c is alpha or not
 * @c: is the character to be checked
 *
 * Return: 1 if c is alpha
 * 0 if c is not alpha
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
