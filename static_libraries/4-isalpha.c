#include "main.h"

/**
 * _isalpha - checks for an alphabetic number
 *
 * @c: input passed to function
 *
 * Return: returns 0 or 1
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		else if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
		return (0);
		}
}
