#include "main.h"

/**
 * _strcpm - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 on success
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (&s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0')
	{
		return (1);
	}
	else if (*s2 == '\0')
	{
		return (-1);
	}
	return (*s1 - *s2)
}
