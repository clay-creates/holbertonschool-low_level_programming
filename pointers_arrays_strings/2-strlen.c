#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: the string whose length is calculated
 *
 * Return: returns string length integer on success
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	for (; s[length]; length++)
	{
		printf("%d", length);
	}
	return (length);
}
