#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
	int len1 = strlen(name);
	int len2 = strlen(owner);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(sizeof(char) * (len1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(sizeof(char) * (len2));
	if (new->owner == NULL)
	{
		free(new);
		return (NULL);
	}
	strcpy(new->name, name);
	strcpy(new->owner, owner);
	new->age = age;
	return (new);
}
