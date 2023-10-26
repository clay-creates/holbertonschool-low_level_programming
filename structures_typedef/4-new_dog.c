#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - make a new dog
 * @name: name of doge
 * @age: doge age
 * @owner: owner of the doge name
 *
 * Return: return pointer to new doge
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *da_dog;

	da_dog = malloc(sizeof(dog_t));

	if (da_dog == NULL)
	{
		free(da_dog);
		return (NULL);
	}

	da_dog->name = malloc(strlen(name) + 1);
	if (da_dog->name == NULL)
	{
		free(da_dog);
		free(da_dog->name);
		return (NULL);
	}

	da_dog->owner = malloc(strlen(owner) + 1);
	if (da_dog->owner == NULL)
	{
		free(da_dog);
		free(da_dog->owner);
		return (NULL);
	}

	strcpy(da_dog->name = name);
	da_dog->age = age;
	strcpy(da_dog->owner = owner);

	return (da_dog);
}
