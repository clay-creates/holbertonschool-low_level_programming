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

			if (sum == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			       
				if (sum < 10)
				{
					_putchar('0' + sum);
				}
				else
				{
					_putchar('0' + (sum / 10));
					_putchar('0' + (sum % 10));
				}
			if (j < 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
}
