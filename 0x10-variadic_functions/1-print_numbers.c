#include <string.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_seperator - prints buffer in hexa
 * @sep: the address of memory to print
 *
 * Return: Nothing.
 */
void print_seperator(char *sep)
{
	int i;

	i = 0;
	while (sep[i] != NULL)
	{
		printf("%d", sep[i]);
	}
}
/**
 * print_numbers - prints buffer in hexa
 * @n: the address of memory to print
 * @separator: the address of memory to print
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	int number;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(valist, int);
		printf("%d", number);
		if (i != (n - 1))
		{
			print_seperator(separator);
		}
	}
	printf("\n");
}
