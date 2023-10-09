#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string being searched
 * @needle: the substring being searched for
 *
 * Return: returns a pointer to the first occurance of substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *nptr = needle;

	while (*haystack != '\0')
	{
		while (*needle != '\0')
		{
			if (*haystack == *needle)
			{
				return (haystack);
			}
			needle++;
		}
		haystack++;
	}
	return (NULL);
}
