#include "main.h"

char *leet(char *s)
{
	int i;
	int u;
	char n[] = "aAeEoOtTlL";
	char k[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (u = 0; u <= 9; u++)
		{
			if (s[i] == n[u])
			{
				s[i] = k[u];
			}
		}
	}
	return (s);
}
