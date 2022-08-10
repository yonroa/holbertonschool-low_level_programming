#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located, -1 if is not present
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size), prev = 0, int_size = size;

	if (!array)
		return (-1);
	while (array[min(jump, size) - 1] < value)
	{
		prev = jump;
		jump += sqrt(value);
		if (prev >= int_size)
			return (-1);
	}
	while (array[prev] < value)
	{
		prev++;
		if (prev == min(jump, size))
			return (-1);
	}
	if (array[prev] == value)
		return (prev);
	return (-1);
}

/**
 * min - search the lowest value between two numbers
 * @a: first number
 * @b: second number
 * Return: The lowest number
 */
int min(int a, int b)
{
	if (b > a)
		return (a);
	else
		return (b);
}
