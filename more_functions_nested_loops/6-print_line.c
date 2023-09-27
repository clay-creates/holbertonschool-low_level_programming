#include "main.h"

/**
 * print_line - drawa a straight line in terminal
 * @n: input passed to print_line, amount of lines
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

	else if (n <= 0)
	{
		_putchar('\n');
	}
}
