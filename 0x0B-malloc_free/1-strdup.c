#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Copy a string in dynamic memory
 * @str: String to be duplicated
 *
 * Return: str2
 */
char *_strdup(char *str)
{
	int i;
	char *str2;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		j++;

	str2 = malloc(sizeof(*str) * j + 1);

	if (str2 == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		str2[i] = str[i];
	}

	return (str2);
}
