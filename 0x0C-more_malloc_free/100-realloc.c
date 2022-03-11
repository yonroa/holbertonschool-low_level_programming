#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - Reallocates a memory block
 * @ptr: Memory previously allocated
 * @old_size: Size of memory previously allocated
 * @new_size: Size of the new memory
 *
 * Return: NULL if something is wrong
 * new_space if everything is ok
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *new_space;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return(NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(ptr));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	new_space = malloc(new_size * sizeof(char));
	
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			new_space[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (new_space);
	}
	else
	{
		while (i < new_size)
		{
			new_space[i] = ((char *)ptr)[i];
			i++;
		}
	}
	free(ptr);
	return (new_space);
}
