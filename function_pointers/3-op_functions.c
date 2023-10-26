#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: returns the sum of both integers
 */

op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - subracts two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: returns difference of both integers
 */

op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: returns the product of both integers
 */

op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - divides two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: returns the result of division
 */

op_div(int a, int b)
{
    return (a / b);
}

/**
 * op_mod - modulo operation on two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: returns the remainder of division
 */

op_mod(int a, int b)
{
    return (a % b);
}
