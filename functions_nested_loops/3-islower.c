#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * int _islower(inc c) - check for a lowercase letter
 *
 * Return: returns 1 or 0 on request
 */

int _islower(int c)
{
	if (c >= 'a'
		&&
		c <= 'z')
		return (1);
	else
		return (0);
}
