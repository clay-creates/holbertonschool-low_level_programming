#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory using calloc
 * @nmemb: elements of array
 * @size: bytes of memory to allocate
 *
 * Return: returns pointer to allocated mem or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	unsigned int *array;

	if (nmemb == NULL || size == NULL)
	{
		return (NULL);
	}

	array = calloc(nmemb, size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}

	return (array);
}
