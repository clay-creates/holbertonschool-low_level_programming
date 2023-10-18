#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to allocated space with concat + null or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int len1, len2;
	char *c_string;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	c_string = malloc((len1 - 1) + (len2 - 1) * sizeof(char));

	if (c_string == NULL)
	{
		return (NULL);
	}

	c_string = s1 - 1;

	for (i = 0; i < len2; i++)
	{
		c_string = s2[i];
	}

	c_string = '\0';

	return (c_string);
}
