#include "main.h"

/**
 * utility - prints buffer in hexa
 * @n: the address of memory to print
 * @i: the address of memory to print
 *
 * Return: Nothing.
 */
int utility(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (utility(n, i - 1));
}
/**
 * _sqrt_recursion - prints buffer in hexa
 * @n: the address of memory to print
 *
 * Return: Nothing.
 */
int _sqrt_recursion(int n)
{
	return (utility(n, n / 2));
}
