#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory to allocate
 *
 * Return: returns pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mptr;

	mptr = malloc(b * sizeof(unsigned int));

	if (mptr == NULL)
	{
		exit(98);
	}

	return (mptr);
}
