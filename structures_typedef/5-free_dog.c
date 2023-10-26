#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog  - lets them dogs out
 * @d: structure to be freed (?)
 */

void free_dog(dog_t *d)
{
    if (d == NULL)
    {
        return (NULL);
    }

    free(d);
}
