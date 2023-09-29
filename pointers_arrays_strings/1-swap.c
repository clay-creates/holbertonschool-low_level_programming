#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer one to be swapped
 * @b: integer two to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
