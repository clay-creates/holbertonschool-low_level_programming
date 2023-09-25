#include "main.h"

/**
 * _abs - computes absolute value of integer
 *
 * Return: returns 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		_putchar(-n);
		return (0);
	}
	else
	{
		_putchar(n);
		return (0);
	}
}
