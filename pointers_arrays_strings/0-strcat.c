#include "main.h"

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
		*dest++;
	}
	while (*src != '\0')
	{
		dest = src;
		*src++;
		*dest++;
	}
	*dest = '\0';
	return (dest);
}
