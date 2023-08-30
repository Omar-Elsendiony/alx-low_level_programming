#include "main.h"

/**
 * factorial - prints buffer in hexa
 * @n: the address of memory to print
 *
 * Return: Nothing.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * _pow_recursion(n - 1));
}
