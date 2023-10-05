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
	int reverse;

	while (*a != '\0')
	{
		a++;
	}

	if (n > 0)
	{
		reverse = a;
		a++;
		n--;
	}

	return (reverse);
}
