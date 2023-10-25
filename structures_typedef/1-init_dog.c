#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes variable of type struct dog
 * @d: struct dog value
 * @name: dog name
 * @age: dog age
 * @owner: name of dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    strcpy(d->name, name);
    d->age, age;
    strcpy(d->owner, owner);
}