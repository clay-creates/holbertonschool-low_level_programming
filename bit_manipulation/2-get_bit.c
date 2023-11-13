#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: bit to check value of
 * @index: index starting from 0
 *
 * Return: return value of bit at index on success, -1 if fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	n = n >> index;

	return (n & 1);
}
