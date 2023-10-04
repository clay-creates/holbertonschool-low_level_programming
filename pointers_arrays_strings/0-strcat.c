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
	int i;
	char temp;

	while (*src != '\0')
	{
		for (i = 0; i <= src[i];)
		{
			i++;
			src++;
			temp = src[i];
		}
	}
	*dest = temp;
	*dest = '\0';
	return (dest);
}
