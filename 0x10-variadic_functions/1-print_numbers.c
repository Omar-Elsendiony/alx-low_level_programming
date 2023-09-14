#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_seperator - prints buffer in hexa
 * @sep: the address of memory to print
 *
 * Return: Nothing.
 */
void print_seperator(const char *sep)
{
	int i;

	i = 0;
	while (sep[i] != '\0')
	{
		printf("%c", sep[i]);
		i++;
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

	if (n <= 0)
	{
		return;
	}
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(valist, int);
		printf("%d", number);
		if (i != (n - 1) && separator != NULL)
		{
			print_seperator(separator);
		}
	}
	va_end(valist);
	printf("\n");
}
