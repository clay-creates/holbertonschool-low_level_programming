#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	int result = mult(num1, num2);

	if (argc < 3)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	printf("%d\n", result);
	return (0);
}
