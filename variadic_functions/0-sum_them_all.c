#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: size of argument array
 *
 * Return: return sum on success or return 0 on fail
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list ap;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	return (sum);
}