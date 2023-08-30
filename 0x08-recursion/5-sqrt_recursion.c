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
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	else
		return (utility(n, i + 1));
}
/**
 * _sqrt_recursion - prints buffer in hexa
 * @n: the address of memory to print
 *
 * Return: Nothing.
 */
int _sqrt_recursion(int n)
{
	return (utility(n, 1));
}
