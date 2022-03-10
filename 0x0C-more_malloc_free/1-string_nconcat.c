#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: n bytes of s2
 *
 * Return: s3
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i = 0;
	unsigned int k;
	int h;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0' && j <= n)
		j++;

	s3 = malloc((sizeof(char) * i) + (sizeof(char) * j));
	if (s3 == NULL)
		return (NULL);
	for (h = 0; h < i; h++)
		s3[h] = s1[h];

	for (k = 0; k < j; k++)
	{
		s3[h] = s2[k];
		h++;
	}

	return (s3);
}
