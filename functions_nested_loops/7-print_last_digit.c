#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: number passed to function
 *
 * Return: returns value of last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	return (lastDigit);
}
