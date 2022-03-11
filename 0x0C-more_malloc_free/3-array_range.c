#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 * Return: str
 */
int *array_range(int min, int max)
{
	int *str;
	int i = 0;

	if (min > max)
		return (NULL);

	str = malloc(sizeof(int) * ((max - min) + 1));

	while (min <= max && i < i ((max - min) + 1))
	{
		str[i] = min;
		i++;
		min++;
	}
	return (str);
}
