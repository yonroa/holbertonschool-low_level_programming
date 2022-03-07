#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - Copy a string in dynamic memory
 * @str: String to be duplicated
 *
 * Return: str2
 */
char *_strdup(char *str)
{
	long unsigned int i;
	char *str2;

	if (str == NULL)
		return (NULL);

	str2 = malloc(sizeof(char) * strlen(str));

	if (str2 == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
	{
		str2[i] = str[i];
	}

	return (str2);
}
