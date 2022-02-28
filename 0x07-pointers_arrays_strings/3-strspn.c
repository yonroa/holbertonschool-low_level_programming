#include "main.h"

/**
 * _strspn - Gets the lenght of a prefix substring
 * @s: String to be checked
 * @accept: Characters to be accepted
 *
 * Return: sum
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int a = 0;
	unsigned int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				sum++;
			}
		}
		a++;
		if (a != sum)
			break;
	}
	return (sum);
}
