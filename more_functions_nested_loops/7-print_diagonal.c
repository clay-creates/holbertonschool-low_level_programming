#include "main.h"

/**
 * print_diagonal - prints out a '\' n number of times
 * @n: input passed to print_diagonal
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		int j;

		for (i = 0; i < n; i++)
		{
			for (j =0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
