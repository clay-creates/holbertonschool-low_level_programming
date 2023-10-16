#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int mul(int a, int b);

/**
 * main - entry point, muliplies two numbers
 * @argc: argument count
 * @argv: array of argument names
 *
 * Return: returns 0 on success
 */

int main(int argc, char **argv)
{
	int sum = mul(*argv[1], *argv[2]);

	if (argc < 2)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	return (0);
}
