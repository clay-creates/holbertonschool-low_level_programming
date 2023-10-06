#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: memory area destination
 * @src: source memory area to be copied
 * @n: number of bytes to be copied
 *
 * Return: return pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest++	= *scr++;
	}
	return (dest);
}
