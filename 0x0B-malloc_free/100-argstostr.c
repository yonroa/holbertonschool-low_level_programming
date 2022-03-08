#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - Concatenates all the arguments of the program
 * @ac: Size of the array av
 * @av: Array of size ac
 *
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	int i, j, sum;
	char *str;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	str = malloc(sizeof(av) * ac);
	sum = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			sum++;
		}
		sum++;
	}
	sum++;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
