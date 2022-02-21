#include "main.h"

/**
 * rev_string - Reverse an string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int u;
	int tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	for (u = 0; u < i / 2; i++)
	{
		tmp = s[u];
		s[u] = s[i - u -1];
		s[i -u -1] = tmp;
	}
}
