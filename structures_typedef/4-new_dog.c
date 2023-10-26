#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - make a new dog
 * @name: name of doge
 * @age: doge age
 * @owner: owner of the doge name
 */

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *da_dog;

    da_dog = malloc(sizeof(dog_t));

    if (da_dog == NULL)
    {
        return (NULL);
    }

    da_dog->name = name;
    da_dog->age = age;
    da_dog->owner = owner;

    return (da_dog);
}
