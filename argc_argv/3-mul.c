#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int mul(int a, int  b);

/**
 * main - entry point, muliplies two numbers
 * @argc: argument count
 * @argv: array of argument names
 *
 * Return: returns 0 on success
 */

int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = mul(num1, num2);

	if (argc < 3)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	printf("%d\n", result);
	return (0);
}
/**
 * mul - multiplies two integers
 * @a: int one
 * @b: int two
 *
 * Return: return result for main
 */

int mul(int a, int b)
{
	return (a * b);
}
