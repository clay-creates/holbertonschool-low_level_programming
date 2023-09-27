#include "main.h"

/**
 * _isdigit - check for digit (0-9)
 * @c: input passed to _isdigit
 *
 * Return: returns 1 or 0 on success
 */

int _isdigit(int c)
{
	if (c >= '0' && c >= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
