#include "main.h"

/**
 * _isupper - Check if a character is uppercase
 * @c: Character to be checked
 *
 * Return: 1 if c is uppercase
 * 0 if is not;
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
