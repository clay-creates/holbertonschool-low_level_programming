#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to append from
 *
 * Return: return dest, pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest - strlen(src));
}
