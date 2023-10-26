#ifndef MAIN
#define MAIN

/**
 * struct op - Struct op
 * @op: the operator
 * @f: function associated
 */

typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);

#endif