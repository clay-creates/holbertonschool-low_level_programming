#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int (*get_op_func(char *s))(int, int);

/**
 * main - entry point
 *
 * Return: returns 0 on success, or 1 on fail
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	char *operator= NULL;
	int (*calc_func)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	*operator= argv[2][0];
	calc_func = get_op_func(operator);

	if (argc < 4)
	{
		return (1);
	}

	if (operator== NULL)
	{
		return (2);
	}

	if (calc_func == NULL)
	{
		return (3);
	}

	result = calc_func(num1, num2);

	return (result);
}
