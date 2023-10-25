#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
    if (d == NULL)
    {
        return;
    }

    if (d->name == NULL)
    {
        printf("nil");
    }
    else
    {
        printf("%s\n", d->name);
    }

    if (!d->age)
    {
        printf("%f\n", d->age);
    }
    else
    {
        printf("nil");
    }

    if (d->owner == NULL)
    {
        printf("nil");
    }
    else
    {
        printf("%s\n", d->owner);
    }
}
