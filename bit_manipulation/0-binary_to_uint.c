#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number to be converted
 *
 * Return: return converted number on success, 0 on fail
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int result, i;

    if (b != 0 || b != 1)
    {
        return (0);
    }

    if (b == NULL)
    {
        return (0);
    }

    *b << 1;

    for (i = 0; i != '\0'; i++)
    {
        b[i] | result;
        *b >> 1;
    }
    return (result);
}
