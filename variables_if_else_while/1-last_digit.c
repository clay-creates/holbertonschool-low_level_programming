#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: returns 0 on request
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;

				int lastDigit;
		
				lastDigit = n % 10;

				printf("Last digit of %d is %d and is", n, lastDigit);

					if (lastDigit > 5)
						printf("greater than 5\n");
					else if (lastDigit == 0)
						printf("0\n");
					else
						printf("less than 6 and not 0\n");
					return (0);
}
