#include "main.h"

/**
 * _atoi - Print the numbers of the string
 * @s: String to be printed
 */
int _atoi(char *s)
{
	int i = 0;
	int u = 0;
	int cont = 0;
	int number;
	int sum = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (u <= i)
	{
		if (s[u] == '-')
		{
			cont++;
		}
		if (s[u] >= '0' && s[u] <= '9')
		{
			number = s[u] - '0';
			if (cont % 2 == 0)
			{
				number = number * -1;
			}

			sum = (sum * 10) + number;

			if (s[u + 1] < '0' || s[u + 1] > '9')
			{
				break;
			}
		}
		u++;
	}
	if (sum == 0)
	{
		return (0);
	}
	return (sum);
}
