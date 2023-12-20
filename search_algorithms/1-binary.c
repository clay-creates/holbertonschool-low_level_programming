#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: returns the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	int j, low, mid, high;

	if (array == NULL)
	{
		return -1;
	}

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		if (array[mid] == value)
		{
			printf("Found at index: %d\n", mid);
			return mid;
		}

		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}

		printf("Searching in array: ");
		for (j = low; j <= high; j++)
		{
			printf("%d", array[j]);
			if (j < high)
				printf(", ");
		}
		printf("\n");
	}

	return -1;
}
