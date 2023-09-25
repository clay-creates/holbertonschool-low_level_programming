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

	hours = 00;
	mins = 00;

	while (hours <= 24)
	{
		while (mins < 60)
		{
			_putchar(hours);
			_putchar(':');
			_putchar(mins);
			mins++;
		}
		hours++;
	}
}
