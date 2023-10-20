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
	unsigned int i, j;
	unsigned int len1, len2;

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
	if (n >= len2)
	{
		n = len2;
	}
	cat_str = malloc(len1 + len2 + 1);
	if (cat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		cat_str[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		if (j < n)
		{
			cat_str[i + j] = s2[j];
		}
	}
	cat_str[i + j] = '\0';
	return (cat_str);
}
