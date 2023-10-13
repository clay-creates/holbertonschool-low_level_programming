#include "main.h"

/**
 * is_prime_number - checks to see if input is a prime number
 * @n: number to be checked
 *
 * Return: returns 1 if true, 0 if false
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (find_prime(n, 2));
	}
}

/**
 * find_prime - calculation for recursive statement
 * @x: base number
 * @y: divisor
 *
 * Return: returns 1 if base is prime, 0 if not
 */

int find_prime(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (y % x == 0)
	{
		return (0);
	}
	else
	{
		return (find_prime(x, y + 1));
	}
}
