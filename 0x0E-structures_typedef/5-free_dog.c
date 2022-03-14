#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - Frees dogs
 * @d: Structure to be released
 */
void free_dog(dog_t *d)
{
	free(d);
}
