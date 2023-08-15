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
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n = n - 1;
		else
			n = n + 1;
	}
	puts("98");
}
