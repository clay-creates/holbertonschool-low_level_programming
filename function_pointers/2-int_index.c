#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: function to compare values
 *
 * Return: return index of first found integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	if (cmp == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] == sizeof(int))
			{
				return (array[i]);
			}
			else
			{
				return (-1);
			}
		}
	}
	return (0);
}