#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied
 *
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	dest = '\n';
	return (dest_start);
}
