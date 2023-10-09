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
	char *hptr, *nptr;

	while (*haystack != '\0')
	{
		htpr = haystack;
		nptr = needle;

		while (*needle != '\0')
		{
			if (*hptr == *nptr)
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
