#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string being searched
 * @c: character being searched for
 *
 * Return: returns a pointer to the first occurance of character, or null 
 */

char *_strchr(char *s, char c)
{
	int i;
	char *cptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			cptr = &s[i];
			break;
		}
	}
	return (cptr);
}
