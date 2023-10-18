#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to allocated space with concat + null or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1, len2;
	char *c_string;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	c_string = malloc((len1 + len2 + 1) * sizeof(char));

	if (c_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		*c_string = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		*c_string = s2[j];
	}

	c_string = '\0';

	return (c_string);
}
