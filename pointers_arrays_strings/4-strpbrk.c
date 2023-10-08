#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string to be searched
 * @accept: the bytes to be searched for
 *
 * Return: returns pointer to the first byte match or NULL if none
 */

char *_strpbrk(char *s, char *accept)
{
	char *aptr = accept;

	while (*s != '\0')
	{
		while (*aptr != '\0')
		{
			if (aptr == s)
			{
				return (aptr);
			}
		aptr++;
		}
	s++;
	}
}
