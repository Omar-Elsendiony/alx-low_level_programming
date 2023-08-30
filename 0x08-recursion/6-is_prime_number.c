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
 * is_prime_number - prints buffer in hexa
 * @n: the address of memory to print
 *
 * Return: Nothing.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (utility(n, n / 2));
}
