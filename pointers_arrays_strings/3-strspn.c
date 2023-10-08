#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string being worked through
 * @accept: bytes to return
 *
 * Return: returns the number of bytes in segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	char *sptr = s;
	char *aptr = accept;
	unsigned int total;

	for (i = 0; *s != '\0'; i++)
	{
		if (accept == s)
		{
			total++;
		}
		else if (accept != s)
		{
			break;
			return (total);
		}
	}
}
