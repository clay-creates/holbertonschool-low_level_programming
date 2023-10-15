#include "main.h"

/**
 * _isupper - check for uppercase letter
 * @c: input passed to _isupper
 *
 * Return: returns 0 on success
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
