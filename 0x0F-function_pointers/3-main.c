#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * main - check the code
 * @argc: t
 * @argv: yry
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int num1, num2, res;
	char *operator;
	char f;

	if (argc - 1 != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	f = argv[2][0];
	if ((f ==  '/'  || argv[2][0] ==  '%') && argv[2][1] == '\0' && num2 == 0)
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
