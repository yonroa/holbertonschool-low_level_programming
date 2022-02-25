#include "main.h"

/**
 * *rot13 - Encodes a string using rot13
 * @s: String to be encoded
 *
 * Return: s
 */
char *rot13(char *s)
{
	int i;
	int u;
	char n[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char k[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (u = 0; n[u] != '\0'; u++)
		{
			if (s[i] == n[u])
			{
				s[i] = k[u];
				break;
			}
		}
	}
	return (s);
}
