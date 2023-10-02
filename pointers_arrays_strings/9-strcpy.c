#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies a string, including the terminating null
 * @dest: the destination that the string is being copied to
 * @src: the source of the string being copied
 *
 * Return: return the value copied to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
