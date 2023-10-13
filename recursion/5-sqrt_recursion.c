#include "main.h"

/**
 * _sqrt_recursion - returns the natural sqaure root of a number
 *
 * @n: number to find square root of
 *
 * Return: returns integer of sqare root, or -1 if not
 */

int find_sqrt(int x, int y);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (find_sqrt(n, 2));
	}
}

/**
 * find_sqrt - provides calculation for recursion
 *
 * @x: n from _sqrt_recursion
 *
 * @y: will be returned as the square root if there is a root
 *
 * Return: returns y if root exists, or -1 if not
 */

int find_sqrt(int x, int y)
{
	if (y >= x / 2)
	{
		return (-1);
	}
	else if (y * y == x)
	{
		return (y);
	}
	else
	{
		return (find_sqrt(x, y + 1));
	}
}
