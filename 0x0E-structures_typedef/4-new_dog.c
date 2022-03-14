#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Dog's owner
 * Return: new
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
