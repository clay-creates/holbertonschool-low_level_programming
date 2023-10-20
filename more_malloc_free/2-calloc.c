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
	unsigned int i;
	unsigned int *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = calloc(nmemb, size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		array[i] = 0;
	}

	return (array);
}
