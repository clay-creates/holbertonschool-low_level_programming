#include "main.h"

/**
 * _isdigit - check for digit (0-9)
 * @c: input passed to _isdigit
 *
 * Return: returns 1 or 0 on success
 */

int _isdigit(int c)
{
	long INT_MIN;
	long INT_MAX;

	INT_MIN = -2147483648;
	INT_MAX = 2147483647;

	if (c >= INT_MIN && c >= INT_MAX && c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
