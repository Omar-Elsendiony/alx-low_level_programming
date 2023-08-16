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

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			product = i * j;
			if (product > 9 && product < 100)
			{
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else if (product >= 100 && product < 999)
			{
				_putchar(product / 100 + '0');
				_putchar((product % 100) / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}
