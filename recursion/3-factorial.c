#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to find factorial of
 *
 * Return: returns the factorial number, or returns -1 if number less than 0
 */

int factorial(int n)
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
		return (n * factorial(n - 1));
	}

}
