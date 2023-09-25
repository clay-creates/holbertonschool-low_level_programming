#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: returns 0
 */

void times_table(void)
{
	int i;
	int j;
	int sum;

	i = 0;
	j = 0;

	while (i <= 9)
	{
		while (j <= 9)
		{
			sum = i * j;
			_putchar('0' + sum);
			_putchar(',');
			_putchar(' ');
			j++;
		}
		i++;
	}
}

