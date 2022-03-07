#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: s3
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int h = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	s3 = malloc(((sizeof(*s1) * i) + (sizeof(*s2) * j) + 1));

	if (s3 == NULL)
		return (NULL);

	while (s1[k] != '\0')
	{
		s3[k] = s1[k];
		k++;
	}
	while (s2[h] != '\0')
	{
		s3[k] = s2[h];
		h++;
		k++;
	}
	return (s3);
}
