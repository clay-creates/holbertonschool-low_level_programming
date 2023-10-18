#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to allocated memory holding a copy of a string
 * @str: string to be copied
 *
 * Return: return pointer to string copy on success or NULL on fail
 */

char *_strdup(char *str)
{
	char *string;

	string = (char *)malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	return (string);
	free (string);
}
