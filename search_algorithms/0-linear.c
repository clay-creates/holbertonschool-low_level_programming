#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: array to search
 * @size: size of array
 * @value: value to search for in array
 *
 * Return: returns the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (array[i]);
		}
	}
	return (-1);
}
