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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			sum = i * j;
			if (j == 0)
			{
				_putchar('0' + sum);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				}
				if (sum < 10)
				{
					_putchar(' ');
				}
		}
			if (sum < 10)
			{
				_putchar('0' + sum);
			}
			else
			{
				_putchar ((sum / 10) + '0');
				_putchar((sum % 10) + '0');
			}
		}
	_putchar('\n');
}
