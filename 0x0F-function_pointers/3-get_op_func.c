
#include "3-calc.h"
#include "function_pointers.h"
#include "string.h"


int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    i = 0;
    while (i < 6)
    {
        if (s != NULL && ops[i].op[0] == s[0] && ops[i].op[1] == s[1])
        {
            return (ops[i].f);
        }
        i++;
    }
    return (NULL);
}
