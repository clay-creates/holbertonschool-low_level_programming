#include "main.h"

/**
 * print_diagonal - prints out a '\' n number of times
 * @n: input passed to print_diagonal
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else (n <= 0)
	{
		_putchar('\n');
	}
}
