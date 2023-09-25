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

	for (hours <= 24)
	{
		for (mins < 60)
		{
			_putchar(%02d, hours);
			_putchar(':');
			_putchar(%02d\n,mins);
			mins++;
		}
		hours++;
	}
}
