#include <string.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - prints buffer in hexa
 * @n: the address of memory to print
 *
 * Return: Nothing.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum;
	int i;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	return (sum);
}
