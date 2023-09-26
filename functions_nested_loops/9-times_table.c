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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			sum = i * j;
			if (j == 0)
			{
			_putchar('0' + sum);
			}
				if (sum < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + sum);
				}
				else if (sum >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((sum / 10) + '0');
					_putchar((sum % 10) + '0');
				}
				if (j > 9)
				{
					j = 0;
				}
		}
			_putchar('\n');
	}
}
