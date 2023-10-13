#include "main.h"

/**
 * _pow_recursion - returns value of x to the power of y
 * @x: number to be raised by the power of
 * @y: number of power raised
 *
 * Return: returns value of x after being raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (x == 1)
	{
		return (1);
	}
	if (y == 1)
	{
		return (1);
	}
	else
	{
		return (_pow_recursion(x, x * y - 1));
	}
}
