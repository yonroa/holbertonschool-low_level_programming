#include "main.h"

/**
 * rev_string - Reverse an string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	int tmp, u;

	for (u = 0; u < i / 2; i++)
	{
		tmp = s[u];
		s[u] = s[i - u -1];
		s[i -x -1] = tmp;
	}
}
