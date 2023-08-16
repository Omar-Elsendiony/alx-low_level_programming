#include "main.h"

/**
 * print_times_table - returns the time table
 * @n: time table to n
 * Description: The description
 * Return: 0
*/
void print_times_table(int n)
{
	int i, j, product;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (product > 9)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar('0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
