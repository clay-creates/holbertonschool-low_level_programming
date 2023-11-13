#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: bit to set index of
 * @index: index, starting at 0
 *
 * Return: return 1 on success, -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = *n & ~(1UL << index);

	return (1);
}
