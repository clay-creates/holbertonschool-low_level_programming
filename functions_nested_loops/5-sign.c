#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: input to pass to function
 *
 * Return: returns 1, 0, or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf(%s'+'\n);
		return (1);
	}
	else if (n == 0)
	{
		printf('0');
		return (0);
	}
	else
	{
		printf('-');
		return (-1);
	}
}
