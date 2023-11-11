#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number to be converted
 *
 * Return: return converted number on success, 0 on fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i;

	if (b == NULL)
	{
		return (0);
	}

	*b << 1;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = (result << 1) | (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
