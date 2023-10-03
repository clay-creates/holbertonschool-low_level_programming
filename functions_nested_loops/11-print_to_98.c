#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 * @n: integer to start from
 */

void print_to_98(int n)
{
	int i = 98;

	while (n < i)
	{
		printf("%d, ", n);
		n++;
		if (n == 98)
		{
			printf("%d", n);
		}
	}
	printf("\n");
}	
