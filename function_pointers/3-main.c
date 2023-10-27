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
    char *operator;

    if (argc < 4)
    {
        return (1);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    operator= * argv[2];
    int (*calc_func)(int, int) = get_op_func(operator);

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
