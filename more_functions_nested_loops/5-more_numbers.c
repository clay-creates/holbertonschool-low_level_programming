#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, ten times
 */

void more_numbers(void)
{
	int i;
	int target;

	i = 0;
	target = 0;

	while (target <= 10)
	{
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar('0' + (i / 10));
			}
			_putchar('0' + (i % 10));
			i++;
		}
		target++;
	}
	_putchar('\n');
}
