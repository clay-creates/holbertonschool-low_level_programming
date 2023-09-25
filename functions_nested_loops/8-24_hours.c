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

	for (hours < 24;
		hours++)
	{
		for (mins < 60;
			mins++)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour %));
			_putchar(':');
			_putchar('0' + (mins / 10));
			_putchar('0' + (muns % 10 ));
			_putchar('\n');
		}
	}
}
