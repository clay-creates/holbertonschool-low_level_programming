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
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			_putchar(' ');
		}
	}
	else
	{
		_putchar('\n');
	}
}
