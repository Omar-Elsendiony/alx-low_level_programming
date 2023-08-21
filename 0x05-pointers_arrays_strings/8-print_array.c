#include "main.h"

/**
 * print_array - returns the alphabet
 * @a: pointer to the start of string
 * @n: number of elements
 * Description: The description
 * Return: void
*/
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar(a[i]);
		i += 1;
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
