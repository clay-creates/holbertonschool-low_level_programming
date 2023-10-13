#include "main.h"

/**
 * _sqrt_recursion - returns the natural sqaure root of a number
 * @n: number to find square root of
 *
 * Return: returns integer of sqare root, or -1 if not
 */
int find_sqrt(int n, int low, int high);

int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 0, n));
}

int find_sqrt(int n, int low, int high)
{
	if (n < 0)
	{
		return (-1);
	}
	if (low > high)
	{
		return (-1);
	}

	int mid = (low + (high - low) / 2);
	int square = (mid * mid);

	if (square == n)
	{
		return (mid);
	}
	else if (square < mid)
	{
		return (find_sqrt(n, mid + 1, high));
	}
	else
	{
		return (find_sqrt(n, low, mid - 1));
	}
}
