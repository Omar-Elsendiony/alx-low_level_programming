
#include "3-calc.h"
#include "function_pointers.h"
#include "string.h"

int stringCompare(char *a, char *b)
{
    int i;

    if (a == NULL || b == NULL)
    {
        return 1;
    }
    i = 0;
    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] != b[i])
            break;
        i++;
    }
    if (a[i] == '\0' && b[i] == '\0')
    {
        return (0);
    }
    return (1);
}

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
