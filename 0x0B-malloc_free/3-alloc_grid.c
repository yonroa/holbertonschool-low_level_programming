#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - Returns a 2 dimensional array of integers
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int k;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(height) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(width) * width);
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			grid[j][k] = 0;
		}
	}

	return (grid);
}
