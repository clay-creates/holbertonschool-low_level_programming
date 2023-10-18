#include "main.h"
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

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		string[i] = str[i];
	}

	return (string);
	free(string);
}
