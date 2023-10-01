#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by newline
 * @a: input of integer array
 * @n: number of elements from array to be printed
 */

void print_array(int *a, int *n)
{
	int i;

	if (*n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < *n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[*n - 1]);
}
