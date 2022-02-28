#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 * @s: Pointer to the memory
 * @b: Constant byte
 * @n: First n bytes
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
