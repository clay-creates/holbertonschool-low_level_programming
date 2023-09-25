#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: returns 0
 */

void jack_bauer(void)
{
	int hours;
	int mins;

	hours = 0;
	mins = 0;

	while (hours < 24)
	{
		while (mins < 60)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			_putchar('\n');
			mins++;
		}
			if (mins > 60)
			{
			mins = 0;
			}
		hours++;
	}
}
