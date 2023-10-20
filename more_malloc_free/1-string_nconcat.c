#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes from s2 to concatenate
 *
 * Return: returns concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat_str;
	int i, j;
	int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	cat_str = malloc(*s1 + *s2 + sizeof(char));

	if (cat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		*cat_str = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		if (j < n)
		{
			*cat_str = s2[j];
		}
	}

	cat_str = '\0';
	return (cat_str);
}
