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
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (j != 0)
			{
				if (product > 9 && product < 100)
				{
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product >= 100 && product < 999)
				{
					_putchar(product / 100 + '0');
					_putchar((product % 100) / 10 + '0');
					_putchar(product % 10 + '0');
				}
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
