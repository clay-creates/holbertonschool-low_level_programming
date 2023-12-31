#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - initializes variable of type struct dog
 * @d: struct dog value
 * @name: dog name
 * @age: dog age
 * @owner: name of dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
