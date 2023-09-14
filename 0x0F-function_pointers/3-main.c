#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
    int num1, num2, res;
    char *operator;
    if (argc - 1 != 3)
    {
        printf("Error\n");
        exit(98);
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    operator = argv[2];
    if ((!stringCompare(argv[2], "/" ) || !stringCompare(argv[2], "%" )) && (num2 == 0))
    {
        printf("Error\n");
        exit(100);
    }
    if ((*get_op_func)(operator) == NULL)
    {
        printf("Error\n");
        exit(99);
    }
    res = (get_op_func(operator))(num1, num2);
    printf("%d\n", res);
    return (0);
}
