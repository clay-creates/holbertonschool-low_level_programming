#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates array of chars and initializes with special char
 * @size: size of array
 * @c: special character to initialize
 *
 * Return: returns pointer to array on success, NULL on fail
 */

char *create_array(unsigned int size, char c)
{
	char *array = array[size];
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	if (size > 0)
	{
		array[0] = 'c';
		if (i == size)
		{
			return (array);
		}
		i++;
	}
}
