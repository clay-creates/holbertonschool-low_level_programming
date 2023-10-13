#include "main.h"

/**
 * _sqrt_recursion - returns the natural sqaure root of a number
 * @n: number to find square root of
 *
 * Return: returns integer of sqare root, or -1 if not
 */

int _sqrt_recursion_helper(int n, int low, int high)
{
	if (n <= 1)
	{
		return (n);
	}

	int mid = (low + high) / 2;
	int mid_squared == mid * mid;

	if (mid_squared == n)
	{
		return (mid);
	}

	if (mid_squared < n)
	{
		return (_sqrt_recursion_helper(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_recursion_helper(n, low, mid - 1));
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
}
