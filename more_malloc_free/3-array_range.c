#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @int: integer minimun
 * @max: integer maximum
 *
 * Return: returns pointer to array
 */

int *array_range(int min, int max)
{
	int i, j;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(min + max * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < max; i++)
	{
		for (j = 0; j < max; j++)
		{
			array[i] = min[j];
		}
	}

	return (array);
}
