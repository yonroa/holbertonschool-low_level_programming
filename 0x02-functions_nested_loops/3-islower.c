#include "main.h"

/**
 * _islower - return 1 if c is lowercase
 * @c: character to be checked
 *
 * Return: 1 if c is lower case
 * 0 if c is not lower case
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
