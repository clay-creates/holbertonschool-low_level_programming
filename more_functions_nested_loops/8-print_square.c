#include "main.h"

/**
 * print_square - prints a square, followed by a newline
 * @size: input passed to print_sqare
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
