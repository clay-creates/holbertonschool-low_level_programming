#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to translate to binary
 */

void print_binary(unsigned long int n)
{
	int dtob;

	if (n == 0)
	{
		_putchar('0');
	}

	if (n == 1)
	{
		_putchar('1');
	}

	/**Calculates number of bits in unsigned long, -1 to find most significant*/

	for (dtob = sizeof(unsigned long int) * 8 - 1; dtob >= 0; dtob--)
	{
		if ((n >> dtob) & 1)
		{
			break;
		}
	}

	for (; dtob >= 0; dtob--)
	{
		/**Shift bit to right, checking each bit for least and printing*/

		_putchar((n >> dtob) & 1 ? '1' : '0');
	}
}
