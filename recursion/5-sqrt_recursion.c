#include "main.h"

/**
 *  * _sqrt_recursion - returns the natural sqaure root of a number
 *   * @n: number to find square root of
 *    *
 *     * Return: returns integer of sqare root, or -1 if not
 *      */

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * _sqrt_recursion(n / 2));
	}
}
