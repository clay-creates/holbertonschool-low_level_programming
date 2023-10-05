#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array being initialized
 * @n: the number of elements in array
 *
 * Return: return reverse
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;
	int j = n - 1;

	for (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
