#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _islower - returns a different number if the input is lowercase
 * @c: input of any char
 *
 * Return: returns 1 or 0 depending on input
 */

int _islower(int c)
{
	int c;

	c = _islower(c)
		if ( c >= 'a'
			&&
			c <= 'z')
		{
			printf("Its lowercase!");
			return (1);
		}
		else
		{
			printf("Its uppercase!");
			return (0);
		}
}
