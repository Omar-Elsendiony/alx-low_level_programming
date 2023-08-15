#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - returns the time table
 * @n: parameter
 * Description: The description
 * Return: 0
*/
void print_to_98(int n)
{
	int units, tens;

	while (n != 98)
	{
		tens = n / 10;
		units = n % 10;
		printf("%d",n);
		
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n = n - 1;
		else
			n = n + 1;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
