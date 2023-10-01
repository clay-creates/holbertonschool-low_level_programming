#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by newline
 * @a: input of integer array
 * @n: number of elements from array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	if (n > 0)
	{
		printf("%d\n", a[n - 1]);
	}
	else
	{
		printf("\n");
	}
}
