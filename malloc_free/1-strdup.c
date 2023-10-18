#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to allocated memory holding a copy of a string
 * @str: string to be copied
 *
 * Return: return pointer to string copy on success or NULL on fail
 */

char *_strdup(char *str)
{
	int i;
	char *string;
	int length = strlen(str);

	string = malloc((length + 1) * sizeof(char));

	if (string == NULL)
	{
		printf("failed to allocate memory");
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		string[i] = str[i];
	}

	string[i] = '\0';

	return (string);
}
