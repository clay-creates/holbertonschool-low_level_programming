#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: integer minimun
 * @max: integer maximum
 *
 * Return: returns pointer to array
 */

int *array_range(int min, int max)
{
	int i;
	int *array;
	int num_elements = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(num_elements * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < num_elements; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
